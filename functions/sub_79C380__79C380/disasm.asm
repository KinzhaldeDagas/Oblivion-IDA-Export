0x79C380: push    0FFFFFFFFh
0x79C382: push    offset SEH_79C380
0x79C387: mov     eax, large fs:0
0x79C38D: push    eax
0x79C38E: push    esi
0x79C38F: push    edi
0x79C390: mov     eax, ds:0B30AACh
0x79C395: xor     eax, esp
0x79C397: push    eax
0x79C398: lea     eax, [esp+18h+var_C]
0x79C39C: mov     large fs:0, eax
0x79C3A2: mov     esi, [esp+18h+arg_0]
0x79C3A6: mov     edi, [esp+18h+arg_8]
0x79C3AA: push    esi
0x79C3AB: mov     ecx, edi
0x79C3AD: mov     [esp+1Ch+var_4], 0
0x79C3B5: call    sub_79B160
0x79C3BA: fld     dword ptr [esi+10h]
0x79C3BD: fstp    dword ptr [edi+10h]
0x79C3C0: fld     dword ptr [esi+14h]
0x79C3C3: fstp    dword ptr [edi+14h]
0x79C3C6: mov     al, [esi+18h]
0x79C3C9: mov     [edi+18h], al
0x79C3CC: fld     dword ptr [esi+1Ch]
0x79C3CF: mov     eax, [esp+18h+arg_3C]
0x79C3D3: fstp    dword ptr [edi+1Ch]
0x79C3D6: fld     dword ptr [esi+20h]
0x79C3D9: push    eax; int
0x79C3DA: fstp    dword ptr [edi+20h]
0x79C3DD: sub     esp, 30h
0x79C3E0: fld     dword ptr [esi+24h]
0x79C3E3: mov     [esp+4Ch+arg_0], esp
0x79C3E7: fstp    dword ptr [edi+24h]
0x79C3EA: mov     ecx, [esi+28h]
0x79C3ED: mov     [edi+28h], ecx
0x79C3F0: mov     edx, [esi+2Ch]
0x79C3F3: mov     [edi+2Ch], edx
0x79C3F6: mov     edi, esp
0x79C3F8: lea     ecx, [esp+4Ch+arg_C]
0x79C3FC: push    ecx
0x79C3FD: mov     ecx, edi
0x79C3FF: call    sub_79AD70
0x79C404: fld     [esp+4Ch+arg_1C]
0x79C408: mov     ecx, [esp+4Ch+arg_38]
0x79C40F: fstp    dword ptr [edi+10h]
0x79C412: mov     eax, [esp+4Ch+arg_34]
0x79C419: fld     [esp+4Ch+arg_20]
0x79C41D: mov     dl, [esp+4Ch+arg_24]
0x79C421: fstp    dword ptr [edi+14h]
0x79C424: fld     [esp+4Ch+arg_28]
0x79C428: mov     [edi+28h], eax
0x79C42B: mov     [edi+2Ch], ecx
0x79C42E: fstp    dword ptr [edi+1Ch]
0x79C431: mov     ecx, [esp+4Ch+arg_4]
0x79C435: fld     [esp+4Ch+arg_2C]
0x79C439: mov     [edi+18h], dl
0x79C43C: fstp    dword ptr [edi+20h]
0x79C43F: fld     [esp+4Ch+arg_30]
0x79C446: sub     ecx, esi
0x79C448: mov     eax, 2AAAAAABh
0x79C44D: fstp    dword ptr [edi+24h]
0x79C450: imul    ecx
0x79C452: sar     edx, 3
0x79C455: mov     eax, edx
0x79C457: shr     eax, 1Fh
0x79C45A: add     eax, edx
0x79C45C: push    eax; int
0x79C45D: push    0; int
0x79C45F: push    esi; int
0x79C460: call    sub_79C130
0x79C465: mov     eax, [esp+58h+arg_10]
0x79C469: add     esp, 40h
0x79C46C: test    eax, eax
0x79C46E: jz      short loc_79C479
0x79C470: push    eax
0x79C471: call    FormHeapFree
0x79C476: add     esp, 4
0x79C479: mov     ecx, [esp+18h+var_C]
0x79C47D: mov     large fs:0, ecx
0x79C484: pop     ecx
0x79C485: pop     edi
0x79C486: pop     esi
0x79C487: add     esp, 0Ch
0x79C48A: retn
