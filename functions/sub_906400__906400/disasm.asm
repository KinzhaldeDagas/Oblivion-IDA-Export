0x906400: sub     esp, 18h
0x906403: push    ebx
0x906404: push    esi
0x906405: mov     esi, [esp+20h+arg_0]
0x906409: push    0FFFFFFFFh
0x90640B: push    18h
0x90640D: lea     eax, [esp+28h+var_18]
0x906411: xor     bl, bl
0x906413: push    eax
0x906414: mov     ecx, esi
0x906416: mov     [esp+2Ch+var_18], offset sub_9068E0
0x90641E: mov     [esp+2Ch+var_14], offset sub_8F6410
0x906426: mov     [esp+2Ch+var_10], offset sub_8F6450
0x90642E: mov     [esp+2Ch+var_C], offset sub_905EE0
0x906436: mov     [esp+2Ch+var_8], 1
0x90643B: mov     [esp+2Ch+var_7], bl
0x90643F: call    sub_8DADD0
0x906444: push    18h
0x906446: push    0FFFFFFFFh
0x906448: lea     ecx, [esp+28h+var_18]
0x90644C: push    ecx
0x90644D: mov     ecx, esi
0x90644F: mov     [esp+2Ch+var_18], offset sub_906780
0x906457: mov     [esp+2Ch+var_14], offset sub_9091D0
0x90645F: mov     [esp+2Ch+var_10], offset sub_908DE0
0x906467: mov     [esp+2Ch+var_C], offset sub_906090
0x90646F: mov     [esp+2Ch+var_8], bl
0x906473: mov     [esp+2Ch+var_7], bl
0x906477: call    sub_8DADD0
0x90647C: push    18h
0x90647E: push    18h
0x906480: lea     edx, [esp+28h+var_18]
0x906484: push    edx
0x906485: mov     ecx, esi
0x906487: mov     [esp+2Ch+var_18], offset sub_906390
0x90648F: mov     [esp+2Ch+var_14], offset sub_9091D0
0x906497: mov     [esp+2Ch+var_10], offset sub_908DE0
0x90649F: mov     [esp+2Ch+var_C], offset sub_906090
0x9064A7: mov     [esp+2Ch+var_8], bl
0x9064AB: mov     [esp+2Ch+var_7], 1
0x9064B0: call    sub_8DADD0
0x9064B5: pop     esi
0x9064B6: pop     ebx
0x9064B7: add     esp, 18h
0x9064BA: retn
