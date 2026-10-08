0x470B50: fld     [esp+easeOutTime]; BSAnimGroupSequence deactivation wrapper. Delegates to NiControllerSequence_Deactivate with the secondary stop flag forced to zero.
0x470B54: push    0; transition
0x470B56: push    ecx
0x470B57: mov     ecx, [esp+8+sequence]; this
0x470B5B: fstp    [esp+8+var_8]; easeOutTime
0x470B5E: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x470B63: retn    8
