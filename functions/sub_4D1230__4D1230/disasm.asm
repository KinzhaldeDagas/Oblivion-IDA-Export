0x4D1230: push    0FFFFFFFFh
0x4D1232: push    offset SEH_5ACE20
0x4D1237: mov     eax, large fs:0
0x4D123D: push    eax
0x4D123E: sub     esp, 8
0x4D1241: push    ebx
0x4D1242: push    ebp
0x4D1243: push    esi
0x4D1244: push    edi
0x4D1245: mov     eax, ds:0B30AACh
0x4D124A: xor     eax, esp
0x4D124C: push    eax
0x4D124D: lea     eax, [esp+28h+var_C]
0x4D1251: mov     large fs:0, eax
0x4D1257: mov     edi, ecx
0x4D1259: mov     ebp, [esp+28h+arg_0]
0x4D125D: xor     esi, esi
0x4D125F: cmp     ebp, esi
0x4D1261: jz      loc_4D131E
0x4D1267: mov     eax, ds:0B43104h
0x4D126C: lea     ecx, [esp+28h+arg_0]
0x4D1270: push    ecx
0x4D1271: push    2
0x4D1273: push    14h
0x4D1275: push    esi
0x4D1276: push    1
0x4D1278: push    100h
0x4D127D: mov     [esp+40h+arg_0], esi
0x4D1281: mov     eax, [eax+280h]
0x4D1287: push    100h
0x4D128C: push    eax
0x4D128D: call    D3DXCreateTexture_0
0x4D1292: cmp     eax, esi
0x4D1294: jl      loc_4D131E
0x4D129A: cmp     [esp+28h+arg_0], esi
0x4D129E: jz      short loc_4D131E
0x4D12A0: mov     [esp+28h+lpPathName], esi
0x4D12A4: mov     [esp+28h+var_10], si
0x4D12A9: mov     [esp+28h+var_E], si
0x4D12AE: lea     edx, [esp+28h+lpPathName]
0x4D12B2: push    edx
0x4D12B3: mov     ecx, edi
0x4D12B5: mov     [esp+2Ch+var_4], esi
0x4D12B9: call    sub_4CFF80
0x4D12BE: mov     ebx, ds:0A280D8h
0x4D12C4: push    esi; lpSecurityAttributes
0x4D12C5: push    offset PathName; ".\\Data\\Textures\\Maps\\"
0x4D12CA: call    ebx ; CreateDirectoryA
0x4D12CC: mov     eax, [esp+28h+lpPathName]
0x4D12D0: push    esi; lpSecurityAttributes
0x4D12D1: push    eax; lpPathName
0x4D12D2: call    ebx ; CreateDirectoryA
0x4D12D4: mov     ecx, [esp+28h+arg_8]
0x4D12D8: mov     edx, [esp+28h+arg_4]
0x4D12DC: push    ecx
0x4D12DD: push    edx
0x4D12DE: lea     eax, [esp+30h+lpPathName]
0x4D12E2: push    eax
0x4D12E3: mov     ecx, edi
0x4D12E5: call    sub_4D0100
0x4D12EA: mov     esi, [esp+28h+lpPathName]
0x4D12EE: mov     ecx, [esp+28h+arg_0]
0x4D12F2: push    esi
0x4D12F3: push    ecx
0x4D12F4: push    100h
0x4D12F9: mov     ecx, ebp; this
0x4D12FB: call    BSRenderedTexture__GetInnerTexture
0x4D1300: push    eax
0x4D1301: call    sub_4816E0
0x4D1306: mov     eax, [esp+38h+arg_0]
0x4D130A: mov     edx, [eax]
0x4D130C: add     esp, 10h
0x4D130F: push    eax
0x4D1310: mov     eax, [edx+8]
0x4D1313: call    eax
0x4D1315: push    esi
0x4D1316: call    FormHeapFree
0x4D131B: add     esp, 4
0x4D131E: mov     ecx, dword ptr [esp+28h+var_C]
0x4D1322: mov     large fs:0, ecx
0x4D1329: pop     ecx
0x4D132A: pop     edi
0x4D132B: pop     esi
0x4D132C: pop     ebp
0x4D132D: pop     ebx
0x4D132E: add     esp, 14h
0x4D1331: retn    0Ch
