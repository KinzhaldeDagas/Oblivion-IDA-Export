0x510580: sub     esp, 0Ch
0x510583: push    esi
0x510584: mov     esi, [esp+10h+arg_8]
0x510588: test    esi, esi
0x51058A: jz      short loc_510590
0x51058C: mov     ecx, esi
0x51058E: jmp     short loc_5105A9
0x510590: mov     ecx, ds:0B333A0h
0x510596: cmp     dword ptr [ecx+34h], 0
0x51059A: jz      short loc_5105A3
0x51059C: call    TES_GetCurrentCell
0x5105A1: jmp     short loc_5105AE
0x5105A3: mov     ecx, ds:0B333C4h; this
0x5105A9: call    TESObjectREFR_GetParentCell
0x5105AE: mov     ecx, ds:0B333CCh
0x5105B4: mov     edx, [ecx+0DCh]
0x5105BA: fld     dword ptr [edx+64h]
0x5105BD: push    0; int
0x5105BF: push    0FFFFFFFFh; float
0x5105C1: fstp    [esp+18h+var_C]
0x5105C5: fld     dword ptr [edx+70h]
0x5105C8: mov     ecx, [esp+18h+var_C]
0x5105CC: push    esi; int
0x5105CD: fstp    [esp+1Ch+var_8]
0x5105D1: fld     dword ptr [edx+7Ch]
0x5105D4: push    offset aEffectsBloodde; "Effects\\blooddecal.dds"
0x5105D9: sub     esp, 0Ch
0x5105DC: fstp    [esp+2Ch+var_4]
0x5105E0: mov     esi, esp
0x5105E2: mov     [esi], ecx
0x5105E4: mov     ecx, [esp+2Ch+var_8]
0x5105E8: mov     [esi+4], ecx
0x5105EB: mov     ecx, [esp+2Ch+var_4]
0x5105EF: mov     [esi+8], ecx
0x5105F2: mov     ecx, [edx+88h]
0x5105F8: add     edx, 88h ; 'ˆ'
0x5105FE: sub     esp, 0Ch
0x510601: mov     esi, esp
0x510603: mov     [esi], ecx
0x510605: mov     ecx, [edx+4]
0x510608: mov     edx, [edx+8]
0x51060B: mov     [esi+4], ecx
0x51060E: mov     ecx, eax
0x510610: mov     [esi+8], edx
0x510613: call    ??0?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiAVObject@@@@QAE@XZ; NiTPointerListBase<NiTPointerAllocator<uint>,NiAVObject *>::NiTPointerListBase<NiTPointerAllocator<uint>,NiAVObject *>(void)
0x510618: mov     al, 1
0x51061A: pop     esi
0x51061B: add     esp, 0Ch
0x51061E: retn
