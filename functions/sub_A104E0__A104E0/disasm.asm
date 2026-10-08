0xA104E0: push    offset stru_B3F684; parent
0xA104E5: push    offset aNipsyscollid_0; "NiPSysCollider"
0xA104EA: mov     ecx, offset stru_B41ECC; this
0xA104EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA104F4: retn
