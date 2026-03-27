0x988FC0: mov     eax, [esp+MaxCount]
0x988FC4: push    ebx
0x988FC5: test    eax, eax
0x988FC7: jz      short _memchr___retnull_0
0x988FC9: mov     edx, [esp+4+Buf]
0x988FCD: xor     ebx, ebx
0x988FCF: mov     bl, byte ptr [esp+4+Val]
0x988FD3: test    edx, 3
0x988FD9: jz      short _memchr___main_loop_start_0
