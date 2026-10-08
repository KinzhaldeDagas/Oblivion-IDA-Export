0xA0AEC0: push    offset stru_B40D60; parent
0xA0AEC5: push    offset aNipsyscylinder; "NiPSysCylinderEmitter"
0xA0AECA: mov     ecx, offset stru_B40944; this
0xA0AECF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0AED4: retn
