enum PROCESS_MITIGATION_POLICY : __int32
{
ProcessDEPPolicy = 0x0,
ProcessASLRPolicy = 0x1,
ProcessDynamicCodePolicy = 0x2,
ProcessStrictHandleCheckPolicy = 0x3,
ProcessSystemCallDisablePolicy = 0x4,
ProcessMitigationOptionsMask = 0x5,
ProcessExtensionPointDisablePolicy = 0x6,
ProcessControlFlowGuardPolicy = 0x7,
ProcessSignaturePolicy = 0x8,
ProcessFontDisablePolicy = 0x9,
ProcessImageLoadPolicy = 0xA,
ProcessSystemCallFilterPolicy = 0xB,
ProcessPayloadRestrictionPolicy = 0xC,
ProcessChildProcessPolicy = 0xD,
ProcessSideChannelIsolationPolicy = 0xE,
MaxProcessMitigationPolicy = 0xF,
};
