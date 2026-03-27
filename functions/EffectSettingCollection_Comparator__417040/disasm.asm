0x417040: mov     eax, [esp+arg_4]
0x417044: mov     eax, [eax+3Ch]
0x417047: test    eax, eax
0x417049: mov     ecx, eax
0x41704B: jnz     short loc_417052
0x41704D: mov     ecx, offset EmptyString
0x417052: mov     edx, [esp+arg_0]
0x417056: mov     eax, [edx+3Ch]
0x417059: test    eax, eax
0x41705B: jnz     short loc_417062
0x41705D: mov     eax, offset EmptyString
0x417062: mov     dl, [eax]
0x417064: cmp     dl, [ecx]
0x417066: jnz     short loc_417081
0x417068: test    dl, dl
0x41706A: jz      short loc_41707E
0x41706C: mov     dl, [eax+1]
0x41706F: cmp     dl, [ecx+1]
0x417072: jnz     short loc_417081
0x417074: add     eax, 2
0x417077: add     ecx, 2
0x41707A: test    dl, dl
0x41707C: jnz     short loc_417062
0x41707E: xor     eax, eax
0x417080: retn
0x417081: sbb     eax, eax
0x417083: sbb     eax, 0FFFFFFFFh
0x417086: retn
