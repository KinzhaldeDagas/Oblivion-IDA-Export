0x790930: mov     eax, [esp+arg_4]
0x790934: push    ebp
0x790935: mov     ebp, [esp+4+arg_0]
0x790939: cmp     ebp, eax
0x79093B: jz      loc_7909BF
0x790941: push    esi
0x790942: lea     esi, [ebp+4]
0x790945: cmp     esi, eax
0x790947: jz      short loc_7909BE
0x790949: push    ebx
0x79094A: push    edi
0x79094B: lea     ebx, [esi+4]
0x79094E: mov     edi, edi
0x790950: mov     edi, [esi]
0x790952: mov     eax, [ebp+0]
0x790955: fld     dword ptr [edi+2Ch]
0x790958: fld     dword ptr [eax+2Ch]
0x79095B: fcompp
0x79095D: fnstsw  ax
0x79095F: test    ah, 5
0x790962: jp      short loc_790975
0x790964: cmp     ebp, esi
0x790966: jz      short loc_7909B0
0x790968: cmp     esi, ebx
0x79096A: jz      short loc_7909B0
0x79096C: push    0
0x79096E: push    0
0x790970: push    ebx
0x790971: push    esi
0x790972: push    ebp
0x790973: jmp     short loc_7909A8
0x790975: mov     edx, esi
0x790977: mov     ecx, esi
0x790979: lea     esp, [esp+0]
0x790980: mov     eax, [ecx-4]
0x790983: fld     dword ptr [edi+2Ch]
0x790986: fld     dword ptr [eax+2Ch]
0x790989: sub     ecx, 4
0x79098C: fcompp
0x79098E: fnstsw  ax
0x790990: test    ah, 5
0x790993: jp      short loc_790999
0x790995: mov     edx, ecx
0x790997: jmp     short loc_790980
0x790999: cmp     edx, esi
0x79099B: jz      short loc_7909B0
0x79099D: cmp     esi, ebx
0x79099F: jz      short loc_7909B0
0x7909A1: push    0
0x7909A3: push    0
0x7909A5: push    ebx
0x7909A6: push    esi
0x7909A7: push    edx
0x7909A8: call    sub_78FC20
0x7909AD: add     esp, 14h
0x7909B0: add     esi, 4
0x7909B3: add     ebx, 4
0x7909B6: cmp     esi, [esp+10h+arg_4]
0x7909BA: jnz     short loc_790950
0x7909BC: pop     edi
0x7909BD: pop     ebx
0x7909BE: pop     esi
0x7909BF: pop     ebp
0x7909C0: retn
