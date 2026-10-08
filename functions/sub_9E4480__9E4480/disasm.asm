0x9E4480: push    0BA7A20h; parent
0x9E4485: push    offset aWeaponobject; "WeaponObject"
0x9E448A: mov     ecx, offset stru_B365AC; this
0x9E448F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E4494: retn
