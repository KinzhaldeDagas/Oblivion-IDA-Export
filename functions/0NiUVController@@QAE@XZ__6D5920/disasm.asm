0x6D5920: push    0FFFFFFFFh
0x6D5922: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x6D5927: mov     eax, large fs:0
0x6D592D: push    eax
0x6D592E: push    ecx
0x6D592F: push    ebx
0x6D5930: push    esi
0x6D5931: push    edi
0x6D5932: mov     eax, ds:0B30AACh
0x6D5937: xor     eax, esp
0x6D5939: push    eax
0x6D593A: lea     eax, [esp+20h+var_C]
0x6D593E: mov     large fs:0, eax
0x6D5944: mov     edi, ecx
0x6D5946: push    58h ; 'X'; Size
0x6D5948: call    FormHeapAlloc
0x6D594D: mov     esi, eax
0x6D594F: add     esp, 4
0x6D5952: mov     [esp+20h+var_10], esi
0x6D5956: xor     ebx, ebx
0x6D5958: cmp     esi, ebx
0x6D595A: mov     [esp+20h+var_4], ebx
0x6D595E: jz      short loc_6D5985
0x6D5960: mov     ecx, esi; this
0x6D5962: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6D5967: mov     dword ptr [esi], offset ??_7NiUVController@@6B@; const NiUVController::`vftable'
0x6D596D: mov     [esi+50h], ebx
0x6D5970: mov     [esi+4Ch], bx
0x6D5974: mov     [esi+3Ch], ebx
0x6D5977: mov     [esi+44h], ebx
0x6D597A: mov     [esi+40h], ebx
0x6D597D: mov     [esi+48h], ebx
0x6D5980: mov     [esi+54h], bl
0x6D5983: jmp     short loc_6D5987
0x6D5985: xor     esi, esi
0x6D5987: mov     eax, [esp+20h+arg_0]
0x6D598B: push    eax
0x6D598C: push    esi
0x6D598D: mov     ecx, edi
0x6D598F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6D5997: call    sub_715D80
0x6D599C: mov     ecx, [edi+3Ch]
0x6D599F: mov     [esi+3Ch], ecx
0x6D59A2: mov     edx, [edi+44h]
0x6D59A5: mov     [esi+44h], edx
0x6D59A8: mov     eax, [edi+40h]
0x6D59AB: mov     [esi+40h], eax
0x6D59AE: mov     ecx, [edi+48h]
0x6D59B1: mov     [esi+48h], ecx
0x6D59B4: mov     dx, [edi+4Ch]
0x6D59B8: mov     [esi+4Ch], dx
0x6D59BC: mov     edi, [edi+50h]
0x6D59BF: cmp     edi, ebx
0x6D59C1: jz      short loc_6D59CB
0x6D59C3: push    edi
0x6D59C4: mov     ecx, esi
0x6D59C6: call    sub_6D5810
0x6D59CB: mov     eax, esi
0x6D59CD: mov     ecx, [esp+20h+var_C]
0x6D59D1: mov     large fs:0, ecx
0x6D59D8: pop     ecx
0x6D59D9: pop     edi
0x6D59DA: pop     esi
0x6D59DB: pop     ebx
0x6D59DC: add     esp, 10h
0x6D59DF: retn    4
