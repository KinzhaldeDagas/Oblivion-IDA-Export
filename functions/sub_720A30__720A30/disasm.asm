0x720A30: push    0FFFFFFFFh
0x720A32: push    offset SEH_8C62B0
0x720A37: mov     eax, large fs:0
0x720A3D: push    eax
0x720A3E: push    ecx
0x720A3F: push    esi
0x720A40: mov     eax, ds:0B30AACh
0x720A45: xor     eax, esp
0x720A47: push    eax
0x720A48: lea     eax, [esp+18h+var_C]
0x720A4C: mov     large fs:0, eax
0x720A52: push    4Ch ; 'L'; Size
0x720A54: call    FormHeapAlloc
0x720A59: mov     esi, eax
0x720A5B: add     esp, 4
0x720A5E: mov     [esp+18h+var_10], esi
0x720A62: test    esi, esi
0x720A64: mov     [esp+18h+var_4], 0
0x720A6C: jz      short loc_720A84
0x720A6E: mov     ecx, esi; this
0x720A70: call    ??0NiSourceTexture@@QAE@XZ; NiSourceTexture::NiSourceTexture(void)
0x720A75: mov     dword ptr [esi], offset NiSourceCubeMap__VTBL
0x720A7B: mov     dword ptr [esi+48h], 0
0x720A82: jmp     short loc_720A86
0x720A84: xor     esi, esi
0x720A86: mov     eax, [esp+18h+arg_1C]
0x720A8A: mov     ecx, [eax]
0x720A8C: mov     [esi+18h], ecx
0x720A8F: mov     edx, [eax+4]
0x720A92: mov     ecx, [esp+18h+arg_14]
0x720A96: push    ecx
0x720A97: mov     ecx, [esp+1Ch+arg_8]
0x720A9B: mov     [esi+1Ch], edx
0x720A9E: mov     eax, [eax+8]
0x720AA1: mov     edx, [esp+1Ch+arg_10]
0x720AA5: push    edx
0x720AA6: mov     edx, [esp+20h+arg_4]
0x720AAA: mov     [esi+20h], eax
0x720AAD: mov     eax, [esp+20h+arg_C]
0x720AB1: push    eax
0x720AB2: mov     eax, [esp+24h+arg_0]
0x720AB6: push    ecx
0x720AB7: push    edx
0x720AB8: push    eax
0x720AB9: mov     ecx, esi
0x720ABB: mov     [esp+30h+var_4], 0FFFFFFFFh
0x720AC3: call    sub_7205A0
0x720AC8: cmp     dword ptr [esi+48h], 0
0x720ACC: jz      short loc_720AD5
0x720ACE: mov     dword ptr [esi+48h], 0
0x720AD5: mov     ecx, [esp+18h+arg_18]
0x720AD9: test    ecx, ecx
0x720ADB: jz      short loc_720B09
0x720ADD: mov     edx, [ecx]
0x720ADF: mov     eax, [edx+10Ch]
0x720AE5: push    esi
0x720AE6: call    eax
0x720AE8: test    al, al
0x720AEA: jnz     short loc_720B09
0x720AEC: mov     edx, [esi]
0x720AEE: mov     eax, [edx]
0x720AF0: push    1
0x720AF2: mov     ecx, esi
0x720AF4: call    eax
0x720AF6: xor     eax, eax
0x720AF8: mov     ecx, [esp+18h+var_C]
0x720AFC: mov     large fs:0, ecx
0x720B03: pop     ecx
0x720B04: pop     esi
0x720B05: add     esp, 10h
0x720B08: retn
0x720B09: mov     eax, esi
0x720B0B: mov     ecx, [esp+18h+var_C]
0x720B0F: mov     large fs:0, ecx
0x720B16: pop     ecx
0x720B17: pop     esi
0x720B18: add     esp, 10h
0x720B1B: retn
