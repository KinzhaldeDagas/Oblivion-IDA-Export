0xA120A0: push    0BA7A20h; parent
0xA120A5: push    offset aBhkblendcoll_0; "bhkBlendCollisionObjectAddRotation"
0xA120AA: mov     ecx, offset stru_BA7A14; this
0xA120AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA120B4: retn
