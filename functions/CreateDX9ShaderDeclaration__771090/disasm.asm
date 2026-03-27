0x771090: push    ebp
0x771091: mov     ebp, [esp+4+a1]
0x771095: push    edi
0x771096: mov     edi, [esp+8+StreamCount]
0x77109A: cmp     edi, [ebp+6DCh]
0x7710A0: jbe     short loc_7710A7
0x7710A2: pop     edi
0x7710A3: xor     eax, eax
0x7710A5: pop     ebp
0x7710A6: retn
0x7710A7: push    esi
0x7710A8: push    38h ; '8'; Size
0x7710AA: call    FormHeapAlloc
0x7710AF: mov     esi, eax
0x7710B1: add     esp, 4
0x7710B4: test    esi, esi
0x7710B6: jz      short loc_7710F3
0x7710B8: mov     ecx, esi; this
0x7710BA: call    ??0NiD3DShaderDeclaration@@QAE@XZ; NiD3DShaderDeclaration::NiD3DShaderDeclaration(void)
0x7710BF: mov     eax, [esp+0Ch+a2]
0x7710C3: push    edi; a4
0x7710C4: push    eax; a3
0x7710C5: push    ebp; a2
0x7710C6: mov     ecx, esi; this
0x7710C8: mov     dword ptr [esi], offset ??_7NiDX9ShaderDeclaration@@6B@; const NiDX9ShaderDeclaration::`vftable'
0x7710CE: mov     dword ptr [esi+2Ch], 0
0x7710D5: mov     dword ptr [esi+30h], 0
0x7710DC: mov     byte ptr [esi+34h], 0
0x7710E0: call    sub_76E320
0x7710E5: test    al, al
0x7710E7: jnz     short loc_7710F5
0x7710E9: mov     edx, [esi]
0x7710EB: mov     eax, [edx]
0x7710ED: push    1
0x7710EF: mov     ecx, esi
0x7710F1: call    eax
0x7710F3: xor     esi, esi
0x7710F5: mov     eax, esi
0x7710F7: pop     esi
0x7710F8: pop     edi
0x7710F9: pop     ebp
0x7710FA: retn
