0x6E0490: push    0FFFFFFFFh
0x6E0492: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x6E0497: mov     eax, large fs:0
0x6E049D: push    eax
0x6E049E: push    ecx
0x6E049F: push    ebx
0x6E04A0: push    esi
0x6E04A1: push    edi
0x6E04A2: mov     eax, ds:0B30AACh
0x6E04A7: xor     eax, esp
0x6E04A9: push    eax
0x6E04AA: lea     eax, [esp+20h+var_C]
0x6E04AE: mov     large fs:0, eax
0x6E04B4: mov     edi, ecx
0x6E04B6: push    44h ; 'D'; Size
0x6E04B8: call    FormHeapAlloc
0x6E04BD: mov     esi, eax
0x6E04BF: add     esp, 4
0x6E04C2: mov     [esp+20h+var_10], esi
0x6E04C6: xor     ebx, ebx
0x6E04C8: cmp     esi, ebx
0x6E04CA: mov     [esp+20h+var_4], ebx
0x6E04CE: jz      short loc_6E04E9
0x6E04D0: mov     ecx, esi; this
0x6E04D2: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6E04D7: mov     dword ptr [esi], offset ??_7NiLookAtController@@6B@; const NiLookAtController::`vftable'
0x6E04DD: mov     [esi+40h], ebx
0x6E04E0: mov     [esi+3Ch], bx
0x6E04E4: mov     [esi+2Ch], bl
0x6E04E7: jmp     short loc_6E04EB
0x6E04E9: xor     esi, esi
0x6E04EB: mov     eax, [esp+20h+arg_0]
0x6E04EF: push    eax
0x6E04F0: push    esi
0x6E04F1: mov     ecx, edi
0x6E04F3: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6E04FB: call    sub_715D80
0x6E0500: movzx   eax, word ptr [edi+3Ch]
0x6E0504: mov     [esi+3Ch], ax
0x6E0508: test    byte ptr [edi+3Ch], 1
0x6E050C: jz      short loc_6E0513
0x6E050E: or      eax, 1
0x6E0511: jmp     short loc_6E0518
0x6E0513: and     eax, 0FFFEh
0x6E0518: mov     [esi+3Ch], ax
0x6E051C: movzx   ecx, byte ptr [edi+3Ch]
0x6E0520: xor     cl, al
0x6E0522: mov     eax, esi
0x6E0524: and     ecx, 6
0x6E0527: xor     [esi+3Ch], cx
0x6E052B: mov     edx, [edi+40h]
0x6E052E: mov     [esi+40h], edx
0x6E0531: mov     ecx, [esp+20h+var_C]
0x6E0535: mov     large fs:0, ecx
0x6E053C: pop     ecx
0x6E053D: pop     edi
0x6E053E: pop     esi
0x6E053F: pop     ebx
0x6E0540: add     esp, 10h
0x6E0543: retn    4
