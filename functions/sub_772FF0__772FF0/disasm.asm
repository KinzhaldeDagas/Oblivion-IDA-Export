0x772FF0: mov     eax, [esp+arg_0]
0x772FF4: movzx   eax, word ptr ds:0B427E0h[eax*2]
0x772FFC: cmp     ax, 8
0x773000: jnb     locret_77308E
0x773006: cmp     [esp+arg_8], 0
0x77300B: mov     edx, [esp+arg_4]
0x77300F: push    ebx
0x773010: movzx   eax, ax
0x773013: jz      short loc_773053
0x773015: cmp     byte ptr [eax+ecx+2Ch], 0
0x77301A: jz      short loc_773024
0x77301C: mov     [ecx+eax*4+0Ch], edx
0x773020: pop     ebx
0x773021: retn    0Ch
0x773024: cmp     byte ptr [eax+ecx+5Ch], 0
0x773029: mov     ebx, 1
0x77302E: jz      short loc_773044
0x773030: mov     byte ptr [eax+ecx+5Ch], 0
0x773035: mov     [eax+ecx+2Ch], bl
0x773039: mov     [ecx+eax*4+0Ch], edx
0x77303D: add     dword ptr [ecx+34h], 0FFFFFFFFh
0x773041: add     [ecx+4], ebx
0x773044: mov     [eax+ecx+2Ch], bl
0x773048: mov     [ecx+eax*4+0Ch], edx
0x77304C: add     [ecx+4], ebx
0x77304F: pop     ebx
0x773050: retn    0Ch
0x773053: cmp     byte ptr [eax+ecx+5Ch], 0
0x773058: jz      short loc_773062
0x77305A: mov     [ecx+eax*4+3Ch], edx
0x77305E: pop     ebx
0x77305F: retn    0Ch
0x773062: cmp     byte ptr [eax+ecx+2Ch], 0
0x773067: mov     ebx, 1
0x77306C: jz      short loc_773082
0x77306E: mov     byte ptr [eax+ecx+2Ch], 0
0x773073: mov     [eax+ecx+5Ch], bl
0x773077: mov     [ecx+eax*4+3Ch], edx
0x77307B: add     [ecx+34h], ebx
0x77307E: add     dword ptr [ecx+4], 0FFFFFFFFh
0x773082: mov     [eax+ecx+5Ch], bl
0x773086: mov     [ecx+eax*4+3Ch], edx
0x77308A: add     [ecx+34h], ebx
0x77308D: pop     ebx
0x77308E: retn    0Ch
