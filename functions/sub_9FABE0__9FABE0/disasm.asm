0x9FABE0: push    0; Verified (Oblivion RTTI): initializes NiRTTI_BSTempEffect with no parent.
0x9FABE2: push    offset aBstempeffect; "BSTempEffect"
0x9FABE7: mov     ecx, offset NiRTTI_BSTempEffect; this
0x9FABEC: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9FABF1: retn
