﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/EventNotificationTopicStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Sidewalk resource type event configuration object for enabling or disabling
   * topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkResourceTypeEventConfiguration">AWS
   * API Reference</a></p>
   */
  class SidewalkResourceTypeEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API SidewalkResourceTypeEventConfiguration();
    AWS_IOTWIRELESS_API SidewalkResourceTypeEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkResourceTypeEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Denotes whether the wireless device join event topic is enabled or
     * disabled.</p>
     */
    inline const EventNotificationTopicStatus& GetWirelessDeviceEventTopic() const{ return m_wirelessDeviceEventTopic; }

    /**
     * <p>Denotes whether the wireless device join event topic is enabled or
     * disabled.</p>
     */
    inline bool WirelessDeviceEventTopicHasBeenSet() const { return m_wirelessDeviceEventTopicHasBeenSet; }

    /**
     * <p>Denotes whether the wireless device join event topic is enabled or
     * disabled.</p>
     */
    inline void SetWirelessDeviceEventTopic(const EventNotificationTopicStatus& value) { m_wirelessDeviceEventTopicHasBeenSet = true; m_wirelessDeviceEventTopic = value; }

    /**
     * <p>Denotes whether the wireless device join event topic is enabled or
     * disabled.</p>
     */
    inline void SetWirelessDeviceEventTopic(EventNotificationTopicStatus&& value) { m_wirelessDeviceEventTopicHasBeenSet = true; m_wirelessDeviceEventTopic = std::move(value); }

    /**
     * <p>Denotes whether the wireless device join event topic is enabled or
     * disabled.</p>
     */
    inline SidewalkResourceTypeEventConfiguration& WithWirelessDeviceEventTopic(const EventNotificationTopicStatus& value) { SetWirelessDeviceEventTopic(value); return *this;}

    /**
     * <p>Denotes whether the wireless device join event topic is enabled or
     * disabled.</p>
     */
    inline SidewalkResourceTypeEventConfiguration& WithWirelessDeviceEventTopic(EventNotificationTopicStatus&& value) { SetWirelessDeviceEventTopic(std::move(value)); return *this;}

  private:

    EventNotificationTopicStatus m_wirelessDeviceEventTopic;
    bool m_wirelessDeviceEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
