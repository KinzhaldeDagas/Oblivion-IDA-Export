0x4D1130: push    0FFFFFFFFh
0x4D1132: push    offset SEH_5ACE20
0x4D1137: mov     eax, large fs:0
0x4D113D: push    eax
0x4D113E: sub     esp, 8
0x4D1141: push    ebx
0x4D1142: push    ebp
0x4D1143: push    esi
0x4D1144: push    edi
0x4D1145: mov     eax, ds:0B30AACh
0x4D114A: xor     eax, esp
0x4D114C: push    eax
0x4D114D: lea     eax, [esp+28h+var_C]
0x4D1151: mov     large fs:0, eax
0x4D1157: mov     edi, ecx
0x4D1159: mov     ebp, [esp+28h+arg_0]
0x4D115D: xor     esi, esi
0x4D115F: cmp     ebp, esi
0x4D1161: jz      loc_4D1210
0x4D1167: mov     eax, ds:0B43104h
0x4D116C: lea     ecx, [esp+28h+arg_0]
0x4D1170: push    ecx
0x4D1171: push    2
0x4D1173: push    14h
0x4D1175: push    esi
0x4D1176: push    1
0x4D1178: push    100h
0x4D117D: mov     [esp+40h+arg_0], esi
0x4D1181: mov     eax, [eax+280h]
0x4D1187: push    100h
0x4D118C: push    eax
0x4D118D: call    D3DXCreateTexture_0
0x4D1192: cmp     eax, esi
0x4D1194: jl      short loc_4D1210
0x4D1196: cmp     [esp+28h+arg_0], esi
0x4D119A: jz      short loc_4D1210
0x4D119C: mov     [esp+28h+lpPathName], esi
0x4D11A0: mov     [esp+28h+var_10], si
0x4D11A5: mov     [esp+28h+var_E], si
0x4D11AA: lea     edx, [esp+28h+lpPathName]
0x4D11AE: push    edx
0x4D11AF: mov     ecx, edi
0x4D11B1: mov     [esp+2Ch+var_4], esi
0x4D11B5: call    sub_4CFF80
0x4D11BA: mov     ebx, ds:0A280D8h
0x4D11C0: push    esi; lpSecurityAttributes
0x4D11C1: push    offset PathName; ".\\Data\\Textures\\Maps\\"
0x4D11C6: call    ebx ; CreateDirectoryA
0x4D11C8: mov     eax, [esp+28h+lpPathName]
0x4D11CC: push    esi; lpSecurityAttributes
0x4D11CD: push    eax; lpPathName
0x4D11CE: call    ebx ; CreateDirectoryA
0x4D11D0: lea     ecx, [esp+28h+lpPathName]
0x4D11D4: push    ecx
0x4D11D5: mov     ecx, edi
0x4D11D7: call    sub_4D0040
0x4D11DC: mov     esi, [esp+28h+lpPathName]
0x4D11E0: mov     edx, [esp+28h+arg_0]
0x4D11E4: push    esi
0x4D11E5: push    edx
0x4D11E6: push    100h
0x4D11EB: mov     ecx, ebp; this
0x4D11ED: call    BSRenderedTexture__GetInnerTexture
0x4D11F2: push    eax
0x4D11F3: call    sub_4816E0
0x4D11F8: mov     eax, [esp+38h+arg_0]
0x4D11FC: mov     ecx, [eax]
0x4D11FE: mov     edx, [ecx+8]
0x4D1201: add     esp, 10h
0x4D1204: push    eax
0x4D1205: call    edx
0x4D1207: push    esi
0x4D1208: call    FormHeapFree
0x4D120D: add     esp, 4
0x4D1210: mov     ecx, dword ptr [esp+28h+var_C]
0x4D1214: mov     large fs:0, ecx
0x4D121B: pop     ecx
0x4D121C: pop     edi
0x4D121D: pop     esi
0x4D121E: pop     ebp
0x4D121F: pop     ebx
0x4D1220: add     esp, 14h
0x4D1223: retn    4
