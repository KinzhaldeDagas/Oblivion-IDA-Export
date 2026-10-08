0x470B20: mov     eax, [esp+timeSyncSequence]; BSAnimGroupSequence activation wrapper. Delegates to NiControllerSequence_Activate with the final transition flag forced to zero.
0x470B24: fld     [esp+easeInTime]
0x470B28: mov     ecx, dword ptr [esp+startOver]
0x470B2C: mov     edx, dword ptr [esp+priority]
0x470B30: push    0; transition
0x470B32: push    eax; timeSyncSequence
0x470B33: sub     esp, 8
0x470B36: fstp    [esp+10h+var_C]; easeInTime
0x470B3A: fld     [esp+10h+weight]
0x470B3E: fstp    [esp+10h+var_10]; weight
0x470B41: push    ecx; startOver
0x470B42: mov     ecx, [esp+14h+sequence]; this
0x470B46: push    edx; priority
0x470B47: call    NiControllerSequence_Activate; Native controller-sequence activation state machine. Rejects an already-active sequence, validates optional time-sync compatibility, records activation parameters, and queues the active sequence with its manager.
0x470B4C: retn    18h
