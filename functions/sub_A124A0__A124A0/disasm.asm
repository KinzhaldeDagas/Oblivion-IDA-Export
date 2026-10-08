0xA124A0: push    offset stru_BA7F6C; parent
0xA124A5: push    offset aBhksimpleshape; "bhkSimpleShapePhantom"
0xA124AA: mov     ecx, offset stru_BA7F78; this
0xA124AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA124B4: retn
