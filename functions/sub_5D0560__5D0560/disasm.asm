0x5D0560: sub     esp, 0Ch
0x5D0563: cmp     [esp+0Ch+arg_0], 33h ; '3'
0x5D0568: push    esi; a3
0x5D0569: mov     esi, ecx
0x5D056B: jl      loc_5D07F1
0x5D0571: push    edi; a3
0x5D0572: mov     edi, [esp+14h+arg_4]
0x5D0576: test    edi, edi
0x5D0578: jz      loc_5D07E9
0x5D057E: cmp     dword ptr [esi+3Ch], 0
0x5D0582: jz      loc_5D07E9
0x5D0588: push    ebx; a3
0x5D0589: push    4; int
0x5D058B: call    sub_57DE50
0x5D0590: add     esp, 4
0x5D0593: push    0FE0h
0x5D0598: mov     ecx, edi
0x5D059A: call    Tile_GetFloat
0x5D059F: call    Double_To_SInt32
0x5D05A4: mov     ebx, eax
0x5D05A6: mov     ecx, edi
0x5D05A8: mov     [esp+18h+a3], ebx; a3
0x5D05AC: call    sub_588D90
0x5D05B1: fstp    qword ptr [esp+18h+var_8]; a3
0x5D05B5: mov     ecx, [esi+3Ch]
0x5D05B8: push    0FBDh
0x5D05BD: call    Tile_GetFloat
0x5D05C2: fsubr   qword ptr [esp+18h+var_8]
0x5D05C6: push    ecx
0x5D05C7: mov     ecx, [esi+3Ch]; this
0x5D05CA: fstp    [esp+1Ch+arg_0]
0x5D05CE: fld     [esp+1Ch+arg_0]
0x5D05D2: fstp    [esp+1Ch+a2]; a3
0x5D05D5: push    0FABh; a2
0x5D05DA: call    Tile_SetFloat
0x5D05DF: lea     eax, [ebx+ebx]
0x5D05E2: mov     [esp+18h+arg_0], eax
0x5D05E6: fild    [esp+18h+arg_0]
0x5D05EA: push    0FCBh
0x5D05EF: mov     ecx, edi
0x5D05F1: fstp    [esp+1Ch+arg_0]
0x5D05F5: call    Tile_GetFloat
0x5D05FA: fsub    [esp+18h+arg_0]
0x5D05FE: push    ecx
0x5D05FF: mov     ecx, [esi+3Ch]; this
0x5D0602: fstp    [esp+1Ch+arg_4]
0x5D0606: fld     [esp+1Ch+arg_4]
0x5D060A: fstp    [esp+1Ch+a2]; a3
0x5D060D: push    0FCBh; a2
0x5D0612: call    Tile_SetFloat
0x5D0617: push    0FCAh
0x5D061C: mov     ecx, edi
0x5D061E: call    Tile_GetFloat
0x5D0623: fsub    [esp+18h+arg_0]
0x5D0627: push    ecx
0x5D0628: mov     ecx, [esi+3Ch]; this
0x5D062B: fstp    [esp+1Ch+arg_0]
0x5D062F: fld     [esp+1Ch+arg_0]
0x5D0633: fstp    [esp+1Ch+a2]; a3
0x5D0636: push    0FCAh; a2
0x5D063B: call    Tile_SetFloat
0x5D0640: fild    [esp+18h+a3]
0x5D0644: mov     ecx, edi
0x5D0646: fstp    [esp+18h+arg_0]
0x5D064A: call    sub_588C50
0x5D064F: fadd    [esp+18h+arg_0]
0x5D0653: push    ecx
0x5D0654: mov     ecx, [esi+3Ch]; this
0x5D0657: fstp    [esp+1Ch+arg_4]
0x5D065B: fld     [esp+1Ch+arg_4]
0x5D065F: fstp    [esp+1Ch+a2]; a3
0x5D0662: push    0FADh; a2
0x5D0667: call    Tile_SetFloat
0x5D066C: mov     ecx, edi
0x5D066E: call    sub_588CF0
0x5D0673: fadd    [esp+18h+arg_0]
0x5D0677: push    ecx
0x5D0678: mov     ecx, [esi+3Ch]; this
0x5D067B: fstp    [esp+1Ch+arg_0]
0x5D067F: fld     [esp+1Ch+arg_0]
0x5D0683: fstp    [esp+1Ch+a2]; a3
0x5D0686: push    0FACh; a2
0x5D068B: call    Tile_SetFloat
0x5D0690: fld     dword ptr ds:0A379B4h
0x5D0696: push    ecx
0x5D0697: mov     ecx, [esi+3Ch]; this
0x5D069A: fstp    [esp+1Ch+a2]; a3
0x5D069D: push    0FA1h; a2
0x5D06A2: call    Tile_SetFloat
0x5D06A7: push    0; a3
0x5D06A9: push    0FB9h
0x5D06AE: mov     ecx, edi
0x5D06B0: call    Tile_GetFloat
0x5D06B5: call    Double_To_SInt32
0x5D06BA: mov     ecx, ds:0B333C4h; this
0x5D06C0: push    eax; a2
0x5D06C1: call    GetInventoryEntryOfItem
0x5D06C6: mov     ebx, eax
0x5D06C8: test    ebx, ebx
0x5D06CA: jz      short loc_5D06EC
0x5D06CC: mov     eax, [ebx+8]
0x5D06CF: push    0; int
0x5D06D1: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x5D06D6: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5D06DB: push    0; int
0x5D06DD: push    eax; void *
0x5D06DE: call    OblivionDynamicCast
0x5D06E3: add     esp, 14h
0x5D06E6: mov     [esp+18h+arg_0], eax
0x5D06EA: jmp     short loc_5D06F4
0x5D06EC: mov     [esp+18h+arg_0], 0
0x5D06F4: mov     ecx, [esi+4]
0x5D06F7: push    ebp
0x5D06F8: call    sub_588D90
0x5D06FD: fstp    [esp+1Ch+arg_4]
0x5D0701: push    1; arg1
0x5D0703: push    0; canCreate
0x5D0705: call    InterfaceManager_GetSingleton
0x5D070A: mov     ebp, [esi+4]
0x5D070D: add     esp, 8
0x5D0710: call    sub_57D7F0
0x5D0715: fstp    qword ptr [esp+1Ch+var_8]
0x5D0719: push    0FBAh
0x5D071E: mov     ecx, ebp
0x5D0720: call    Tile_GetFloat
0x5D0725: fsubr   qword ptr [esp+1Ch+var_8]
0x5D0729: mov     eax, [esi+58h]
0x5D072C: cmp     eax, 1
0x5D072F: fstp    [esp+1Ch+a3]
0x5D0733: jz      loc_5D07D3
0x5D0739: cmp     eax, 2
0x5D073C: jz      loc_5D07D3
0x5D0742: mov     ebp, [esp+1Ch+arg_0]
0x5D0746: test    ebp, ebp
0x5D0748: jz      short loc_5D0784
0x5D074A: fld     [esp+1Ch+arg_4]
0x5D074E: mov     esi, [esi+4]
0x5D0751: push    ecx
0x5D0752: fstp    [esp+20h+var_20]; float
0x5D0755: push    ebx; int
0x5D0756: fld     [esp+24h+a3]
0x5D075A: push    ecx
0x5D075B: mov     ecx, edi
0x5D075D: fstp    [esp+28h+var_28]; float
0x5D0760: call    sub_588CF0
0x5D0765: push    ecx
0x5D0766: fstp    [esp+2Ch+var_2C]; float
0x5D0769: push    0FB0h
0x5D076E: mov     ecx, esi
0x5D0770: call    Tile_GetFloat
0x5D0775: push    ecx
0x5D0776: fstp    [esp+30h+var_30]; float
0x5D0779: push    ebp; int
0x5D077A: call    sub_57BB20
0x5D077F: add     esp, 18h
0x5D0782: jmp     short loc_5D07D3
0x5D0784: mov     ecx, [ebx+8]
0x5D0787: mov     al, [ecx+4]
0x5D078A: cmp     al, 26h ; '&'
0x5D078C: jz      short loc_5D079A
0x5D078E: cmp     al, 2Ah ; '*'
0x5D0790: jz      short loc_5D079A
0x5D0792: cmp     al, 14h
0x5D0794: jz      short loc_5D079A
0x5D0796: cmp     al, 21h ; '!'
0x5D0798: jnz     short loc_5D07D3
0x5D079A: fld     [esp+1Ch+arg_4]
0x5D079E: mov     esi, [esi+4]
0x5D07A1: sub     esp, 8
0x5D07A4: fstp    [esp+24h+var_20]; float
0x5D07A8: mov     ecx, edi
0x5D07AA: fld     [esp+24h+a3]
0x5D07AE: fstp    [esp+24h+var_24]; float
0x5D07B1: call    sub_588CF0
0x5D07B6: push    ecx
0x5D07B7: fstp    [esp+28h+var_28]; float
0x5D07BA: push    0FB0h
0x5D07BF: mov     ecx, esi
0x5D07C1: call    Tile_GetFloat
0x5D07C6: push    ecx
0x5D07C7: fstp    [esp+2Ch+var_2C]; float
0x5D07CA: push    ebx; int
0x5D07CB: call    sub_57BCC0
0x5D07D0: add     esp, 14h
0x5D07D3: test    ebx, ebx
0x5D07D5: pop     ebp
0x5D07D6: jz      short loc_5D07E8
0x5D07D8: mov     ecx, ebx
0x5D07DA: call    ContainerEntryExtraData_DestroyDataTable
0x5D07DF: push    ebx
0x5D07E0: call    FormHeapFree
0x5D07E5: add     esp, 4
0x5D07E8: pop     ebx
0x5D07E9: pop     edi
0x5D07EA: pop     esi
0x5D07EB: add     esp, 0Ch
0x5D07EE: retn    8
0x5D07F1: fld1
0x5D07F3: push    ecx
0x5D07F4: mov     ecx, [esi+3Ch]; this
0x5D07F7: fstp    [esp+14h+var_14]; a3
0x5D07FA: push    0FA1h; a2
0x5D07FF: call    Tile_SetFloat
0x5D0804: pop     esi
0x5D0805: add     esp, 0Ch
0x5D0808: retn    8
