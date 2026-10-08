0xA12640: push    offset stru_B3FC98; ODismemberment: initializes BSFixedString 'bhkForceController' for class-chain checks.
0xA12645: push    offset aBhkforcecontro; "bhkForceController"
0xA1264A: mov     ecx, 0BA8000h; this
0xA1264F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12654: retn
