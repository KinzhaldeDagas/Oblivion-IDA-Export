0x8D30B0: push    ebp
0x8D30B1: mov     ebp, esp
0x8D30B3: and     esp, 0FFFFFFF0h
0x8D30B6: mov     eax, 3058h
0x8D30BB: call    __alloca_probe
0x8D30C0: push    esi
0x8D30C1: mov     esi, [ebp+arg_4]
0x8D30C4: lea     eax, [esp+305Ch+var_3020]
0x8D30C8: mov     [esp+305Ch+var_3050], eax
0x8D30CC: mov     eax, [esi]
0x8D30CE: push    edi
0x8D30CF: mov     edi, [ebp+arg_0]
0x8D30D2: lea     ecx, [eax+1B40h]
0x8D30D8: mov     [esi+28h], ecx
0x8D30DB: movsx   edx, byte ptr [edi+8]
0x8D30DF: imul    edx, 3Ch ; '<'
0x8D30E2: lea     ecx, [esp+3060h+var_3050]
0x8D30E6: push    ecx
0x8D30E7: mov     [esp+3064h+var_1C], 7F7FFFFFh
0x8D30F2: mov     [esp+3064h+var_10], 0
0x8D30FD: mov     al, [edx+eax+1A24h]
0x8D3104: push    esi
0x8D3105: push    edi
0x8D3106: mov     [esi+0Ch], al
0x8D3109: call    sub_8E6D10
0x8D310E: mov     eax, [esp+306Ch+var_3050]
0x8D3112: lea     edx, [esp+306Ch+var_3020]
0x8D3116: add     esp, 0Ch
0x8D3119: cmp     eax, edx
0x8D311B: jz      short loc_8D3133
0x8D311D: mov     ecx, [edi+10h]
0x8D3120: mov     eax, [ecx]
0x8D3122: lea     edx, [esp+3060h+var_3050]
0x8D3126: push    edx
0x8D3127: mov     edx, [edi+18h]
0x8D312A: push    esi
0x8D312B: push    edx
0x8D312C: mov     edx, [edi+14h]
0x8D312F: push    edx
0x8D3130: call    dword ptr [eax+14h]
0x8D3133: pop     edi
0x8D3134: pop     esi
0x8D3135: mov     esp, ebp
0x8D3137: pop     ebp
0x8D3138: retn
