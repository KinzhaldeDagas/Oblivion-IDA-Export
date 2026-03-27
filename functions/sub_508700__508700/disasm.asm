0x508700: push    ecx
0x508701: mov     ecx, [esp+4+l]
0x508705: mov     edx, [esp+4+arg_10]
0x508709: lea     eax, [esp+4+var_4]
0x50870C: push    eax; UInt16
0x50870D: mov     eax, [esp+8+arg_C]
0x508711: push    ecx; l
0x508712: mov     ecx, [esp+0Ch+a4]
0x508716: push    edx; a6
0x508717: mov     edx, [esp+10h+a3]
0x50871B: push    eax; a5
0x50871C: mov     eax, [esp+14h+arg_4]
0x508720: push    ecx; a4
0x508721: mov     ecx, [esp+18h+a1]
0x508725: push    edx; a3
0x508726: push    eax; a2
0x508727: push    ecx; a1
0x508728: mov     dword ptr [esp+24h+var_4], 0
0x508730: call    Script_ExtractArgs
0x508735: add     esp, 20h
0x508738: test    al, al
0x50873A: jnz     short loc_50873E
0x50873C: pop     ecx
0x50873D: retn
0x50873E: push    esi
0x50873F: push    0; a2
0x508741: mov     ecx, offset ActorProcessManager_ptr; this
0x508746: call    sub_673A50
0x50874B: mov     ecx, eax; this
0x50874D: call    sub_7616D0
0x508752: mov     esi, eax
0x508754: test    esi, esi
0x508756: jz      short loc_508799
0x508758: cmp     dword ptr [esi+4], 0
0x50875C: jnz     short loc_508763
0x50875E: cmp     dword ptr [esi], 0
0x508761: jz      short loc_508799
0x508763: mov     eax, [esi]
0x508765: push    0; int
0x508767: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50876C: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x508771: push    0; int
0x508773: push    eax; void *
0x508774: call    OblivionDynamicCast
0x508779: add     esp, 14h
0x50877C: test    eax, eax
0x50877E: jz      short loc_508792
0x508780: fldz
0x508782: mov     edx, dword ptr [esp+8+var_4]
0x508786: push    ecx
0x508787: fstp    [esp+0Ch+var_C]; int
0x50878A: push    edx; int
0x50878B: mov     ecx, eax; int
0x50878D: call    Actor_Kill
0x508792: mov     esi, [esi+4]
0x508795: test    esi, esi
0x508797: jnz     short loc_508758
0x508799: mov     al, 1
0x50879B: pop     esi
0x50879C: pop     ecx
0x50879D: retn
