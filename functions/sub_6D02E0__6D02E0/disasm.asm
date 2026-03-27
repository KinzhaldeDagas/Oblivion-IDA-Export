0x6D02E0: push    0FFFFFFFFh
0x6D02E2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x6D02E7: mov     eax, large fs:0
0x6D02ED: push    eax
0x6D02EE: push    ecx
0x6D02EF: push    ebx
0x6D02F0: push    esi
0x6D02F1: push    edi
0x6D02F2: mov     eax, ds:0B30AACh
0x6D02F7: xor     eax, esp
0x6D02F9: push    eax
0x6D02FA: lea     eax, [esp+20h+var_C]
0x6D02FE: mov     large fs:0, eax
0x6D0304: mov     ebx, ecx
0x6D0306: push    48h ; 'H'; Size
0x6D0308: call    FormHeapAlloc
0x6D030D: mov     esi, eax
0x6D030F: add     esp, 4
0x6D0312: mov     [esp+20h+var_10], esi
0x6D0316: xor     edi, edi
0x6D0318: cmp     esi, edi
0x6D031A: mov     [esp+20h+var_4], edi
0x6D031E: jz      short loc_6D0339
0x6D0320: mov     ecx, esi
0x6D0322: call    sub_6D04E0
0x6D0327: mov     dword ptr [esi], offset ??_7NiMultiTargetTransformController@@6B@; const NiMultiTargetTransformController::`vftable'
0x6D032D: mov     [esi+3Ch], edi
0x6D0330: mov     [esi+40h], edi
0x6D0333: mov     [esi+44h], di
0x6D0337: jmp     short loc_6D033B
0x6D0339: xor     esi, esi
0x6D033B: mov     eax, [esp+20h+arg_0]
0x6D033F: push    eax
0x6D0340: push    esi
0x6D0341: mov     ecx, ebx
0x6D0343: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6D034B: call    sub_6D0170
0x6D0350: mov     eax, esi
0x6D0352: mov     ecx, [esp+20h+var_C]
0x6D0356: mov     large fs:0, ecx
0x6D035D: pop     ecx
0x6D035E: pop     edi
0x6D035F: pop     esi
0x6D0360: pop     ebx
0x6D0361: add     esp, 10h
0x6D0364: retn    4
