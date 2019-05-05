/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 at Sun May 05 15:36:00 2019. */

#ifndef PB_PROTOCOL_PB_H_INCLUDED
#define PB_PROTOCOL_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _RequestId {
    RequestId_MSG_NONE = 0,
    RequestId_READ_CONFIG = 1,
    RequestId_WRITE_CONFIG = 2,
    RequestId_GET_STATS = 3,
    RequestId_CALLIBRATE_ACC = 4,
    RequestId_SAVE_CONFIG = 5
} RequestId;
#define _RequestId_MIN RequestId_MSG_NONE
#define _RequestId_MAX RequestId_SAVE_CONFIG
#define _RequestId_ARRAYSIZE ((RequestId)(RequestId_SAVE_CONFIG+1))

typedef enum _ReplyId {
    ReplyId_NO_REPLY = 0,
    ReplyId_GENERIC_OK = 1,
    ReplyId_GENERIC_FAIL = 2,
    ReplyId_STATS = 3,
    ReplyId_CONFIG = 4,
    ReplyId_CRC_MISMATCH = 5
} ReplyId;
#define _ReplyId_MIN ReplyId_NO_REPLY
#define _ReplyId_MAX ReplyId_CRC_MISMATCH
#define _ReplyId_ARRAYSIZE ((ReplyId)(ReplyId_CRC_MISMATCH+1))

/* Struct definitions */
typedef struct _Config_BalancingConfig {
    float balance_expo;
    float balance_angle_scaling;
    int32_t max_start_angle_steer;
    int32_t shutoff_angle_steer;
    int32_t shutoff_angle_drive;
    int32_t max_update_limiter;
    float output_lpf_rc;
    int32_t balance_d_param_limiter;
    float balance_d_param_lpf_rc;
    uint32_t global_gyro_lpf;
/* @@protoc_insertion_point(struct:Config_BalancingConfig) */
} Config_BalancingConfig;

typedef struct _Config_Callibration {
    int32_t acc_x;
    int32_t acc_y;
    int32_t acc_z;
/* @@protoc_insertion_point(struct:Config_Callibration) */
} Config_Callibration;

typedef struct _Config_FootPadSettings {
    float filter_rc;
    int32_t min_level_to_start;
    int32_t min_level_to_continue;
    int32_t shutoff_delay_ms;
/* @@protoc_insertion_point(struct:Config_FootPadSettings) */
} Config_FootPadSettings;

typedef struct _Config_Misc {
    float beep_rc;
    float beep_threshold;
/* @@protoc_insertion_point(struct:Config_Misc) */
} Config_Misc;

typedef struct _Config_PidConfig {
    float p;
    float d;
    float i;
    float max_i;
/* @@protoc_insertion_point(struct:Config_PidConfig) */
} Config_PidConfig;

typedef struct _Stats {
    bool has_batt_voltage;
    float batt_voltage;
    bool has_batt_current;
    float batt_current;
    bool has_motor_current;
    float motor_current;
    bool has_speed;
    float speed;
    bool has_distance_traveled;
    float distance_traveled;
    float drive_angle;
    float stear_angle;
    uint32_t pad_pressure1;
    uint32_t pad_pressure2;
/* @@protoc_insertion_point(struct:Stats) */
} Stats;

typedef struct _Config {
    bool has_callibration;
    Config_Callibration callibration;
    Config_PidConfig balance_pid;
    Config_FootPadSettings foot_pad;
    Config_BalancingConfig balance_settings;
    Config_Misc misc;
/* @@protoc_insertion_point(struct:Config) */
} Config;

/* Default values for struct fields */
extern const int32_t Config_Callibration_acc_x_default;
extern const int32_t Config_Callibration_acc_y_default;
extern const int32_t Config_Callibration_acc_z_default;
extern const float Config_PidConfig_p_default;
extern const float Config_PidConfig_d_default;
extern const float Config_PidConfig_i_default;
extern const float Config_PidConfig_max_i_default;
extern const float Config_FootPadSettings_filter_rc_default;
extern const int32_t Config_FootPadSettings_min_level_to_start_default;
extern const int32_t Config_FootPadSettings_min_level_to_continue_default;
extern const int32_t Config_FootPadSettings_shutoff_delay_ms_default;
extern const float Config_BalancingConfig_balance_expo_default;
extern const float Config_BalancingConfig_balance_angle_scaling_default;
extern const int32_t Config_BalancingConfig_max_start_angle_steer_default;
extern const int32_t Config_BalancingConfig_shutoff_angle_steer_default;
extern const int32_t Config_BalancingConfig_shutoff_angle_drive_default;
extern const int32_t Config_BalancingConfig_max_update_limiter_default;
extern const float Config_BalancingConfig_output_lpf_rc_default;
extern const int32_t Config_BalancingConfig_balance_d_param_limiter_default;
extern const float Config_BalancingConfig_balance_d_param_lpf_rc_default;
extern const uint32_t Config_BalancingConfig_global_gyro_lpf_default;
extern const float Config_Misc_beep_rc_default;
extern const float Config_Misc_beep_threshold_default;

/* Initializer values for message structs */
#define Config_init_default                      {false, Config_Callibration_init_default, Config_PidConfig_init_default, Config_FootPadSettings_init_default, Config_BalancingConfig_init_default, Config_Misc_init_default}
#define Config_Callibration_init_default         {0, 0, 0}
#define Config_PidConfig_init_default            {2200, 0.65, 0.9, 500}
#define Config_FootPadSettings_init_default      {0.03, 3300, 2000, 0}
#define Config_BalancingConfig_init_default      {1.4, 10, 15, 40, 14, 300, 1, 300, 0.5, 2u}
#define Config_Misc_init_default                 {0.05, 0.75}
#define Stats_init_default                       {false, 0, false, 0, false, 0, false, 0, false, 0, 0, 0, 0, 0}
#define Config_init_zero                         {false, Config_Callibration_init_zero, Config_PidConfig_init_zero, Config_FootPadSettings_init_zero, Config_BalancingConfig_init_zero, Config_Misc_init_zero}
#define Config_Callibration_init_zero            {0, 0, 0}
#define Config_PidConfig_init_zero               {0, 0, 0, 0}
#define Config_FootPadSettings_init_zero         {0, 0, 0, 0}
#define Config_BalancingConfig_init_zero         {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define Config_Misc_init_zero                    {0, 0}
#define Stats_init_zero                          {false, 0, false, 0, false, 0, false, 0, false, 0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define Config_BalancingConfig_balance_expo_tag  1
#define Config_BalancingConfig_balance_angle_scaling_tag 2
#define Config_BalancingConfig_max_start_angle_steer_tag 3
#define Config_BalancingConfig_shutoff_angle_steer_tag 4
#define Config_BalancingConfig_shutoff_angle_drive_tag 5
#define Config_BalancingConfig_max_update_limiter_tag 6
#define Config_BalancingConfig_output_lpf_rc_tag 7
#define Config_BalancingConfig_balance_d_param_limiter_tag 8
#define Config_BalancingConfig_balance_d_param_lpf_rc_tag 9
#define Config_BalancingConfig_global_gyro_lpf_tag 10
#define Config_Callibration_acc_x_tag            1
#define Config_Callibration_acc_y_tag            2
#define Config_Callibration_acc_z_tag            3
#define Config_FootPadSettings_filter_rc_tag     1
#define Config_FootPadSettings_min_level_to_start_tag 2
#define Config_FootPadSettings_min_level_to_continue_tag 3
#define Config_FootPadSettings_shutoff_delay_ms_tag 4
#define Config_Misc_beep_rc_tag                  6
#define Config_Misc_beep_threshold_tag           7
#define Config_PidConfig_p_tag                   1
#define Config_PidConfig_d_tag                   2
#define Config_PidConfig_i_tag                   3
#define Config_PidConfig_max_i_tag               4
#define Stats_batt_voltage_tag                   1
#define Stats_batt_current_tag                   2
#define Stats_motor_current_tag                  3
#define Stats_speed_tag                          5
#define Stats_distance_traveled_tag              6
#define Stats_drive_angle_tag                    7
#define Stats_stear_angle_tag                    8
#define Stats_pad_pressure1_tag                  9
#define Stats_pad_pressure2_tag                  10
#define Config_callibration_tag                  1
#define Config_balance_pid_tag                   2
#define Config_foot_pad_tag                      3
#define Config_balance_settings_tag              4
#define Config_misc_tag                          5

/* Struct field encoding specification for nanopb */
extern const pb_field_t Config_fields[6];
extern const pb_field_t Config_Callibration_fields[4];
extern const pb_field_t Config_PidConfig_fields[5];
extern const pb_field_t Config_FootPadSettings_fields[5];
extern const pb_field_t Config_BalancingConfig_fields[11];
extern const pb_field_t Config_Misc_fields[3];
extern const pb_field_t Stats_fields[10];

/* Maximum encoded size of messages (where known) */
#define Config_size                              192
#define Config_Callibration_size                 33
#define Config_PidConfig_size                    20
#define Config_FootPadSettings_size              38
#define Config_BalancingConfig_size              81
#define Config_Misc_size                         10
#define Stats_size                               47

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTOCOL_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
