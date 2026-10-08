struct __declspec(align(4)) _SECURITY_QUALITY_OF_SERVICE
{
DWORD Length;
SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
BOOLEAN EffectiveOnly;
};
