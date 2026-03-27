0x708450: push    0FFFFFFFFh
0x708452: push    offset ??0NiAVObject@@QAE@XZ_SEH
0x708457: mov     eax, large fs:0
0x70845D: push    eax
0x70845E: push    ecx
0x70845F: push    ebx
0x708460: push    esi
0x708461: push    edi
0x708462: mov     eax, ds:0B30AACh
0x708467: xor     eax, esp
0x708469: push    eax
0x70846A: lea     eax, [esp+20h+var_C]
0x70846E: mov     large fs:0, eax
0x708474: mov     esi, ecx
0x708476: mov     [esp+20h+var_10], esi
0x70847A: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x70847F: xor     ebx, ebx
0x708481: mov     dword ptr [esi], offset ??_7NiAVObject@@6B@; const NiAVObject::`vftable'
0x708487: mov     [esp+20h+var_4], ebx
0x70848B: mov     [esi+0A4h], ebx
0x708491: mov     [esi+9Ch], ebx
0x708497: mov     [esi+0A0h], ebx
0x70849D: mov     dword ptr [esi+98h], offset ??_7?$NiTPointerList@V?$NiPointer@VNiProperty@@@@@@6B@; const NiTPointerList<NiPointer<NiProperty>>::`vftable'
0x7084A7: mov     [esi+0A8h], ebx
0x7084AD: lea     ecx, [esi+30h]
0x7084B0: mov     byte ptr [esp+20h+var_4], 2
0x7084B5: mov     [esi+1Ch], ebx
0x7084B8: mov     [esi+18h], bx
0x7084BC: call    sub_718A50
0x7084C1: lea     ecx, [esi+64h]
0x7084C4: call    sub_718A50
0x7084C9: fldz
0x7084CB: mov     eax, ds:0B3F9A8h
0x7084D0: mov     [esi+20h], eax
0x7084D3: mov     ecx, ds:0B3F9ACh
0x7084D9: mov     [esi+24h], ecx
0x7084DC: mov     edx, ds:0B3F9B0h
0x7084E2: fstp    dword ptr [esi+2Ch]
0x7084E5: mov     [esi+28h], edx
0x7084E8: mov     ax, [esi+18h]
0x7084EC: and     ax, 0FFEFh
0x7084F0: or      ax, 0Eh
0x7084F4: mov     [esi+18h], ax
0x7084F8: mov     edi, [esi+0A8h]
0x7084FE: cmp     edi, ebx
0x708500: jz      short loc_708524
0x708502: lea     ecx, [edi+4]
0x708505: push    ecx; lpAddend
0x708506: call    dword ptr ds:0A2807Ch
0x70850C: test    eax, eax
0x70850E: jnz     short loc_70851E
0x708510: cmp     edi, ebx
0x708512: jz      short loc_70851E
0x708514: mov     edx, [edi]
0x708516: mov     eax, [edx]
0x708518: push    1
0x70851A: mov     ecx, edi
0x70851C: call    eax
0x70851E: mov     [esi+0A8h], ebx
0x708524: mov     eax, esi
0x708526: mov     ecx, dword ptr [esp+20h+var_C]
0x70852A: mov     large fs:0, ecx
0x708531: pop     ecx
0x708532: pop     edi
0x708533: pop     esi
0x708534: pop     ebx
0x708535: add     esp, 10h
0x708538: retn
