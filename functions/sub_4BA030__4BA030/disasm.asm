0x4BA030: push    esi; Verified: scans the uint32 seed array at +0x4C with uint16 count +0x52; returns byte index on match or 0xFF for empty/missing values. TESObjectREFR_SetTreeSeedByValue uses 0xFF to remove the per-reference seed extra.
0x4BA031: movzx   esi, word ptr [ecx+52h]
0x4BA035: or      al, 0FFh
0x4BA037: xor     edx, edx
0x4BA039: test    esi, esi
0x4BA03B: jbe     short loc_4BA05B
0x4BA03D: mov     ecx, [ecx+4Ch]
0x4BA040: push    edi
0x4BA041: mov     edi, [esp+8+seed]
0x4BA045: cmp     [ecx], edi
0x4BA047: jz      short loc_4BA058
0x4BA049: add     edx, 1
0x4BA04C: add     ecx, 4
0x4BA04F: cmp     edx, esi
0x4BA051: jb      short loc_4BA045
0x4BA053: pop     edi
0x4BA054: pop     esi
0x4BA055: retn    4
0x4BA058: mov     al, dl
0x4BA05A: pop     edi
0x4BA05B: pop     esi
0x4BA05C: retn    4
