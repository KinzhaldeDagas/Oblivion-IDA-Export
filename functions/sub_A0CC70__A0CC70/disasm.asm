0xA0CC70: push    offset stru_B41ECC; parent
0xA0CC75: push    offset aNipsysplanarco; "NiPSysPlanarCollider"
0xA0CC7A: mov     ecx, offset stru_B4104C; this
0xA0CC7F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0CC84: retn
