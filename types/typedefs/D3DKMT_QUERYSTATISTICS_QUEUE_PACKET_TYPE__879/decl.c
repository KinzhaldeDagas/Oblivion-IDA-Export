enum _D3DKMT_QUERYSTATISTICS_QUEUE_PACKET_TYPE : __int32
{
D3DKMT_RenderCommandBuffer = 0x0,
D3DKMT_DeferredCommandBuffer = 0x1,
D3DKMT_SystemCommandBuffer = 0x2,
D3DKMT_MmIoFlipCommandBuffer = 0x3,
D3DKMT_WaitCommandBuffer = 0x4,
D3DKMT_SignalCommandBuffer = 0x5,
D3DKMT_DeviceCommandBuffer = 0x6,
D3DKMT_SoftwareCommandBuffer = 0x7,
D3DKMT_QueuePacketTypeMax = 0x8,
};
