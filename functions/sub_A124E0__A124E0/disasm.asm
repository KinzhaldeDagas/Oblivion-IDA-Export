0xA124E0: push    offset stru_BA7D38; parent
0xA124E5: push    offset aBhkentity; "bhkEntity"
0xA124EA: mov     ecx, offset stru_BA7F90; this
0xA124EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA124F4: retn
