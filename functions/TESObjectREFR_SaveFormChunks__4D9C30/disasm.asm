0x4D9C30: sub     esp, 1Ch
0x4D9C33: push    esi
0x4D9C34: mov     esi, ecx
0x4D9C36: call    TESForm_InitializeFormRecord
0x4D9C3B: mov     eax, [esi+8]
0x4D9C3E: shr     eax, 5
0x4D9C41: test    al, 1
0x4D9C43: jnz     loc_4D9CEB
0x4D9C49: mov     ecx, [esi+1Ch]
0x4D9C4C: mov     edx, [ecx+0Ch]
0x4D9C4F: push    edi
0x4D9C50: push    4; Size
0x4D9C52: lea     eax, [esp+28h+Src]
0x4D9C56: push    eax; Src
0x4D9C57: push    454D414Eh; int
0x4D9C5C: mov     [esp+30h+Src], edx
0x4D9C60: call    TESForm_PutFormRecordChunkData
0x4D9C65: lea     edi, [esi+44h]
0x4D9C68: add     esp, 0Ch
0x4D9C6B: mov     ecx, edi
0x4D9C6D: call    ExtraDataList_Save
0x4D9C72: fld1
0x4D9C74: fcomp   dword ptr [esi+38h]
0x4D9C77: fnstsw  ax
0x4D9C79: test    ah, 44h
0x4D9C7C: jnp     short loc_4D9C92
0x4D9C7E: fld     dword ptr [esi+38h]
0x4D9C81: push    ecx
0x4D9C82: fstp    [esp+28h+var_28]
0x4D9C85: push    4C435358h
0x4D9C8A: call    TESForm_PutCurrentChunkData4
0x4D9C8F: add     esp, 8
0x4D9C92: push    8
0x4D9C94: mov     ecx, edi
0x4D9C96: call    sub_41F830
0x4D9C9B: test    al, al
0x4D9C9D: pop     edi
0x4D9C9E: jz      short loc_4D9CAD
0x4D9CA0: push    4D414E4Fh
0x4D9CA5: call    sub_46BA10
0x4D9CAA: add     esp, 4
0x4D9CAD: mov     ecx, [esi+2Ch]
0x4D9CB0: mov     edx, [esi+30h]
0x4D9CB3: mov     eax, [esi+34h]
0x4D9CB6: mov     [esp+20h+var_18], ecx
0x4D9CBA: mov     ecx, [esi+20h]
0x4D9CBD: mov     [esp+20h+var_C], ecx
0x4D9CC1: push    18h; Size
0x4D9CC3: lea     ecx, [esp+24h+var_18]
0x4D9CC7: mov     [esp+24h+var_14], edx
0x4D9CCB: mov     edx, [esi+24h]
0x4D9CCE: mov     [esp+24h+var_10], eax
0x4D9CD2: mov     eax, [esi+28h]
0x4D9CD5: push    ecx; Src
0x4D9CD6: push    41544144h; int
0x4D9CDB: mov     [esp+2Ch+var_8], edx
0x4D9CDF: mov     [esp+2Ch+var_4], eax
0x4D9CE3: call    TESForm_PutFormRecordChunkData
0x4D9CE8: add     esp, 0Ch
0x4D9CEB: mov     ecx, esi; this
0x4D9CED: call    TESForm_FinalizeFormRecord
0x4D9CF2: pop     esi
0x4D9CF3: add     esp, 1Ch
0x4D9CF6: retn
