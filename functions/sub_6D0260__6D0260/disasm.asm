0x6D0260: push    0FFFFFFFFh
0x6D0262: push    offset SEH_8C8970
0x6D0267: mov     eax, large fs:0
0x6D026D: push    eax
0x6D026E: push    ecx
0x6D026F: push    esi
0x6D0270: push    edi
0x6D0271: mov     eax, ds:0B30AACh
0x6D0276: xor     eax, esp
0x6D0278: push    eax
0x6D0279: lea     eax, [esp+1Ch+var_C]
0x6D027D: mov     large fs:0, eax
0x6D0283: push    48h ; 'H'; Size
0x6D0285: call    FormHeapAlloc
0x6D028A: mov     esi, eax
0x6D028C: add     esp, 4
0x6D028F: mov     [esp+1Ch+var_10], esi
0x6D0293: xor     edi, edi
0x6D0295: cmp     esi, edi
0x6D0297: mov     [esp+1Ch+var_4], edi
0x6D029B: jz      short loc_6D02C8
0x6D029D: mov     ecx, esi
0x6D029F: call    sub_6D04E0
0x6D02A4: mov     dword ptr [esi], offset ??_7NiMultiTargetTransformController@@6B@; const NiMultiTargetTransformController::`vftable'
0x6D02AA: mov     [esi+3Ch], edi
0x6D02AD: mov     [esi+40h], edi
0x6D02B0: mov     [esi+44h], di
0x6D02B4: mov     eax, esi
0x6D02B6: mov     ecx, [esp+1Ch+var_C]
0x6D02BA: mov     large fs:0, ecx
0x6D02C1: pop     ecx
0x6D02C2: pop     edi
0x6D02C3: pop     esi
0x6D02C4: add     esp, 10h
0x6D02C7: retn
0x6D02C8: xor     eax, eax
0x6D02CA: mov     ecx, [esp+1Ch+var_C]
0x6D02CE: mov     large fs:0, ecx
0x6D02D5: pop     ecx
0x6D02D6: pop     edi
0x6D02D7: pop     esi
0x6D02D8: add     esp, 10h
0x6D02DB: retn
