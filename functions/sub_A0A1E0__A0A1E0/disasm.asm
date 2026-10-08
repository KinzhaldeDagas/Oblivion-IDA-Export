0xA0A1E0: push    offset stru_B3F684; parent
0xA0A1E5: push    offset aNiskinpartitio; "NiSkinPartition"
0xA0A1EA: mov     ecx, offset stru_B3FF24; this
0xA0A1EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A1F4: retn
