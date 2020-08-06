//
//  THConstants.h
//  THOpenSDK
//
//  Created by ThinkHome on 2019/12/5.
//  Copyright © 2019 ThinkHome. All rights reserved.
//  所有错误码的地方

#import <Foundation/Foundation.h>

typedef NS_ENUM(int,THErrorCode){
    
    TH_URL_SUCCESS = 10000,                    //操作成功
    
    /**
     * 账号
     */
    TH_ACCOUNT_NULL = 100001, //账号为空
    TH_ACCOUNT_FORMAT_WRONG = 100002,//账号格式错误
    TH_PASSWORD_NULL = 100003,//密码为空
    TH_PASSWORD_FORMAT_WRONG = 100004,//密码格式错误
    TH_VERIFICATION_NULL = 100005,//验证码为空
    TH_RECEIVER_NULL = 100006,//手机号码为空
    TH_RECEIVER_FORMAT_WRONG = 100007,//手机号码格式错误
//
//    TH_ACCOUNT_NAME_NULL = 110001,
//    TH_ACCOUNT_NAME_TOOLONG = 110002,
//    TH_ACCOUNT_NAME_FORMAT_WRONG = 110003,
//    TH_ACCOUNT_EMAIL_NULL = 110004,
//    TH_ACCOUNT_EMAIL_FORMAT_WRONG = 110005,
//
    TH_HOME_NAME_NULL = 120001, //房屋名字为空
    TH_HOME_NAME_TOOLONG = 120002, //房屋名字过长
    TH_HOME_NAME_FORMAT_WRONG = 120003,//房屋名字不符合规则
    TH_HOME_HOMEID_NULL = 120004, //房屋homeID为空
    TH_HOME_NOT_EXIST = 10015,                //房屋不存在
//
    TH_TERMINAL_SEQUENCE_NULL = 130001, //控制编号为空
    TH_TERMINAL_NAME_NULL = 130002, //控制器名字为空
    TH_TERMINAL_NAME_TOOLONG = 130003, //控制器名称过长
    TH_TERMINAL_NAME_FORMAT_WRONG = 130004, //控制器名称格式不正确
    TH_TERMINAL_FEEDBACKOPTIONS_NULL = 130005, //更新设备数据为空
//    TH_TERMINAL_SHOWTYPE_NULL = 130006,
    TH_TERMINAL_MAC_NULL = 130007, //mac地址为空
    TH_TERMINAL_NOT_EXIST = 10023, //控制器不存在
    
//
    TH_DEVICE_DEVICENO_NULL = 140001,//设备账号为空
    TH_DEVICE_CUSTOMIMAGE_NULL = 140002,//设备图片为空
    TH_DEVICE_ROOMNO_NULL = 140003,//设备房间号为空
    TH_DEVICE_NAME_NULL = 140004,//设备名字为空
    TH_DEVICE_NAME_TOOLONG = 140005,    //设备名字过长
    TH_DEVICE_NAME_FORMAT_WRONG = 140006,   //设备名字不能含有特殊字符
    TH_DEVICE_SUBTYPE_NULL = 140007,    //设备类型不能为空
    TH_DEVICE_SENSORSETTINGDATA_NULL = 140008, //传感类设备数据为空
    TH_DEVICE_ATTRIBUTES_BIND = 10032,         //属性绑定
    TH_DEVICE_TYPE_CANNOT_CHANGE = 140009, //设备类型无法更改
    
    //设备操作
    TH_DEVICE_OPERATION_NOTFIND = 210001,//本地操作指令未发现
    TH_DEVICE_OPERATION_OFFLINE = 210002,//设备未在线
    TH_DEVICE_OPERATION_CLOSE= 210003,//设备未开启
    TH_DEVICE_OPERATION_POWERLOCK= 210004,//电源已锁定
    TH_DEVICE_OPERATION_OVERLOADPROTECTION = 210005,//过载保护
    TH_DEVICE_OPERATION_NOTTHECODE = 210006,//本地操作指令未发现

    
    //楼层
    TH_FLOOR_FLOORNO_NULL = 150001, //楼层编号为空
    TH_FLOOR_FLOORNO_BEYOND = 150002, //楼层选择超出范围 地下5楼到100楼 -5到100
    
    //房间
    TH_ROOM_ROOMNAME_NULL = 160001, //房间名称为空
    TH_ROOM_NAME_TOOLONG = 160002, //房间名称过长
    TH_ROOM_ROOMTYPE_NULL = 160003, //房间类型为空
    TH_ROOM_ROOMINFO_NULL = 160004, //房间信息为空
    TH_ROOME_NAME_FORMAT_WRONG = 160005,//房屋名字不符合规则
//
//
//    //系统错误
    TH_SYSTEM_ACCESSTOKEN_NULL = 900001, //token为空
    TH_SYSTEM_HOMEID_NULL = 900002, //homeID为空
    TH_SYSTEM_MAINTAIN = 49997,                //系统维护
    TH_SYSTEM_ACTION_FAIL = 19999,                //操作失败
    //特殊错误
    TH_URL_ERROR = 999999,                     //一般为网络请求错误或者本地错误
    
    TH_ACCESSTOKEN_WRONG = 10008,              //accessToken错误
    TH_SYSTEM_WRONGACTION = 10009,              //请求数据不合法
    TH_AUTHORIZATION_FAILURE = 10010,              //授权失败
};

typedef NS_ENUM(int,THTerminalRegisterWay){
    THTERMINALREGWAY_WIRED = 1,                 //有线
    THTERMINALREGWAY_SMARTLINK = 3,             //SmartLink
    THTERMINALREGWAY_SMARTAP = 4,               //SmartAP
    THTERMINALREGWAY_BLUETOOTHSAFEBOX = 5,      //蓝牙保险箱
    THTERMINALREGWAY_IBEACON = 6,               //云子
};

typedef NS_ENUM(int,THRoomType){
    THROOMTYPE_DEFAULT = 1,                 //默认
    THROOMTYPE_BEDROOM = 2,                 //卧室
    THROOMTYPE_SITTINGROOM = 3,             //客厅
    THROOMTYPE_RESTAURANT = 4,              //餐厅
    THROOMTYPE_KITCHEN = 5,                 //厨房
    THROOMTYPE_BABYROOM = 6,                //婴儿房
    THROOMTYPE_STUDY = 7,                   //书房
    THROOMTYPE_GYM = 8,                     //健身房
    THROOMTYPE_AVROOM = 9,                  //影音房
    THROOMTYPE_CHESS = 10,                  //棋牌室
    THROOMTYPE_WINECELLAR = 11,             //酒窖
    THROOMTYPE_BATHROOM = 12,               //浴室
    THROOMTYPE_TOILET = 13,                 //卫生间
    THROOMTYPE_MASTERBEDROOM = 14,          //主卧
    THROOMTYPE_GUESTLIES = 15,              //客卧
    THROOMTYPE_DOMESTICBEDROOM = 16,        //佣人卧室
};

typedef NS_ENUM(int,THOperationType) {
    //基础类
    THOperationOn, /**< 设备打开 */
    THOperationOff,/**< 设备关闭 */
    //调光类
    THOperationLightValue,/**<  调光设备值调整 */
    THOperationDimmingPeriod,/**<   P9电压上限  */
    //调色类
    THOperationColorValue,/**<  调色设备值调整 */
    THOperationColorMode,/**<   调色设备模式切换   */
    THOperationColorTemperature,//调色设备模式切换
    //无线、红外
    THOperationWirelessOperate,//无线、红外类操作
    THOperationWirelessLearn,//无线、红外类学习
    //空调类
    THOperationAirConditioningTemperature,//空调类温度调节
    THOperationAirConditioningWindSpeed,//空调类风速调节
    THOperationAirConditioningMode,//空调类模式调节
    THOperationAirConditioningLock,//空调类锁定调节
    THOperationAirConditioningWindDirection,//空调类风向调节
    //地暖类
    THOperationFloorHeatingTemperature,
    THOperationFloorHeatingLock,//地暖类锁定调节
    THOperationFloorHeatingMode,//地暖类模式调节
    //音响类
    THOperationMusicVolume,//播放器音量
    THOperationMusicVolumePlus,//播放器音量
    THOperationMusicVolumeReduce,//播放器音量
    THOperationMusicMute,//播放器静音
    THOperationMusicPrevious,//播放器上一曲
    THOperationMusicPlay,//播放器播放
    THOperationMusicPause,//播放器暂停
    THOperationMusicNext,//播放器下一曲
    THOperationMusicSource,//播放器音源
    THOperationMusicPlayMode,//音响类循环模式
    //窗帘类
    THOperationCurtainOpen,//窗帘打开
    THOperationCurtainPause,//窗帘暂停
    THOperationCurtainClose,//窗帘关闭
    THOperationCurtainValue,//窗帘设置开合度
    THOperationCurtainReverse,//窗帘反向
    THOperationCurtainResetStorke,//窗帘重设行程
    THOperationCurtainTop,//窗帘设置最高点
    THOperationCurtainBottom,//窗帘设置最低点
    THOperationCurtainReverseAngle,//窗帘角度反向
    THOperationCurtainCalibration_90,//窗帘角度矫正90°
    THOperationCurtainCalibration_Increase,//窗帘角度矫正增加
    THOperationCurtainCalibration_Decrease,//窗帘角度矫正减少
    THOperationCurtainCalibration_ReverseAngle,//窗帘角度反向
    THOperationCurtainAngle,//百叶帘窗帘角度
    //中央新风类
    THOperationFreshAirWindSpeed,//新风风速调节
    THOperationFreshAirExhaustSpeed,//新风排风风速调节
    THOperationFreshAirMode,//新风模式调节
    //P9类特殊操作
    THOperationP9OverCurrent,//P9设置过载电流
    THOperationP9VoverrunAction,//P9过压触发
    THOperationP9Lowersetting,//P9电压下限
    THOperationP9Uppersetting,//P9电压上限
    //播放器
    THOperationPlayerPlay,//播放器播放
    THOperationPlayerPause,//播放器暂停
    THOperationPlayerStop,//播放器停止
    THOperationPlayerMenu,//播放器菜单
    THOperationPlayerHome,//播放器主页
    THOperationPlayerBack,//播放器返回
    THOperationPlayerKeyBoard,//播放器键盘调节
    THOperationPlayerSubtitles,//播放器字母
    THOperationPlayerTrack,//播放器音轨
    THOperationPlayerFastForward,//播放器快进
    THOperationPlayerRewindDown,//播放器快退
    THOperationPlayerLastPage,//播放器上一页
    THOperationPlayerNextPage,//播放器下一页
    //投影仪
    THOperationProjectorMode,//投影仪模式调节
    //电表
    THOperationVariableRatio,//电表变比值
};

@interface THConstants : NSObject

@end

