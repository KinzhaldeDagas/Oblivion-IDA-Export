0xA0F1F0: push    offset stru_B40D08; parent
0xA0F1F5: push    offset aNipsyscollider; "NiPSysColliderManager"
0xA0F1FA: mov     ecx, offset stru_B41944; this
0xA0F1FF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0F204: retn
