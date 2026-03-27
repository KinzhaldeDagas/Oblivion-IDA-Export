0x9840F8: mov     esi, edi
0x9840FA: mov     ecx, [esp+arg_10]
0x9840FE: mov     al, [edi]
0x984100: add     esi, 1
0x984103: cmp     al, dl
0x984105: jz      short _strstr___first_char_found
0x984107: test    al, al
0x984109: jz      short _strstr___not_found
