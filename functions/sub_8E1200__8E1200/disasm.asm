0x8E1200: push    ebp
0x8E1201: mov     ebp, esp
0x8E1203: and     esp, 0FFFFFFF0h
0x8E1206: push    ecx
0x8E1207: mov     edx, [ebp+arg_4]
0x8E120A: push    ebx
0x8E120B: mov     ebx, [ebp+arg_8]
0x8E120E: push    esi
0x8E120F: mov     esi, [ebp+arg_0]
0x8E1212: push    edi
0x8E1213: lea     ecx, [edx+ebx]
0x8E1216: sar     ecx, 1
0x8E1218: mov     ecx, [esi+ecx*4]
0x8E121B: mov     eax, ebx
0x8E121D: mov     edi, edx
0x8E121F: nop
0x8E1220: cmp     [esi+edi*4], cx
0x8E1224: jnb     short loc_8E122D
0x8E1226: inc     edi
0x8E1227: cmp     [esi+edi*4], cx
0x8E122B: jb      short loc_8E1226
0x8E122D: cmp     cx, [esi+eax*4]
0x8E1231: jnb     short loc_8E123A
0x8E1233: dec     eax
0x8E1234: cmp     cx, [esi+eax*4]
0x8E1238: jb      short loc_8E1233
0x8E123A: cmp     eax, edi
0x8E123C: jl      short loc_8E1258
0x8E123E: jz      short loc_8E1252
0x8E1240: mov     ebx, [esi+edi*4]
0x8E1243: mov     edx, [esi+eax*4]
0x8E1246: mov     [esi+eax*4], ebx
0x8E1249: mov     ebx, [ebp+arg_8]
0x8E124C: mov     [esi+edi*4], edx
0x8E124F: mov     edx, [ebp+arg_4]
0x8E1252: dec     eax
0x8E1253: inc     edi
0x8E1254: cmp     edi, eax
0x8E1256: jle     short loc_8E1220
0x8E1258: cmp     edx, eax
0x8E125A: jge     short loc_8E126B
0x8E125C: mov     ecx, [ebp+arg_C]
0x8E125F: push    ecx
0x8E1260: push    eax
0x8E1261: push    edx
0x8E1262: push    esi
0x8E1263: call    sub_8E1200
0x8E1268: add     esp, 10h
0x8E126B: cmp     edi, ebx
0x8E126D: jge     short loc_8E1276
0x8E126F: mov     edx, edi
0x8E1271: mov     [ebp+arg_4], edx
0x8E1274: jmp     short loc_8E1213
0x8E1276: pop     edi
0x8E1277: pop     esi
0x8E1278: pop     ebx
0x8E1279: mov     esp, ebp
0x8E127B: pop     ebp
0x8E127C: retn
