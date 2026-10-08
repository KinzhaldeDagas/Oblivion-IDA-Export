0xA0C630: push    offset stru_B41ECC; parent
0xA0C635: push    offset aNipsysspherica; "NiPSysSphericalCollider"
0xA0C63A: mov     ecx, offset stru_B40ED0; this
0xA0C63F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0C644: retn
