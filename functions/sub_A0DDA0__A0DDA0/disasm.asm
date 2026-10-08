0xA0DDA0: push    offset stru_B41F8C; parent
0xA0DDA5: push    offset aNipsysfieldatt; "NiPSysFieldAttenuationCtlr"
0xA0DDAA: mov     ecx, offset stru_B4146C; this
0xA0DDAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0DDB4: retn
