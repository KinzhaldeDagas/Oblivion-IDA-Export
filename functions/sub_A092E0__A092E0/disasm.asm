0xA092E0: push    offset stru_B3CCB0; parent
0xA092E5: push    offset aNipoint3inte_0; "NiPoint3InterpController"
0xA092EA: mov     ecx, offset stru_B3EEFC; this
0xA092EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA092F4: retn
