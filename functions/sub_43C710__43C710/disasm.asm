0x43C710: sub     esp, 20Ch
0x43C716: mov     eax, ___security_cookie
0x43C71B: xor     eax, esp
0x43C71D: mov     [esp+20Ch+var_4], eax
0x43C724: push    ebx
0x43C725: mov     ebx, ecx
0x43C727: mov     eax, [ebx+3Ch]
0x43C72A: lea     ecx, [eax+3Ch]
0x43C72D: mov     eax, [ecx+4]
0x43C730: test    eax, eax
0x43C732: jz      loc_43C7E9
0x43C738: cmp     byte ptr [eax], 0
0x43C73B: jz      loc_43C7E9
0x43C741: mov     eax, [ecx]
0x43C743: mov     edx, [eax+14h]
0x43C746: call    edx
0x43C748: lea     edx, [esp+210h+Str1]
0x43C74C: lea     esp, [esp+0]
0x43C750: mov     cl, [eax]
0x43C752: mov     [edx], cl
0x43C754: add     eax, 1
0x43C757: add     edx, 1
0x43C75A: test    cl, cl
0x43C75C: jnz     short loc_43C750
0x43C75E: mov     eax, [ebx+3Ch]
0x43C761: add     eax, 3Ch ; '<'
0x43C764: mov     eax, [eax+4]
0x43C767: test    eax, eax
0x43C769: jnz     short loc_43C770
0x43C76B: mov     eax, offset EmptyString
0x43C770: mov     edx, eax
0x43C772: mov     cl, [eax]
0x43C774: add     eax, 1
0x43C777: test    cl, cl
0x43C779: jnz     short loc_43C772
0x43C77B: push    esi
0x43C77C: push    edi
0x43C77D: lea     edi, [esp+218h+Str1]
0x43C781: sub     eax, edx
0x43C783: add     edi, 0FFFFFFFFh
0x43C786: mov     cl, [edi+1]
0x43C789: add     edi, 1
0x43C78C: test    cl, cl
0x43C78E: jnz     short loc_43C786
0x43C790: mov     ecx, eax
0x43C792: shr     ecx, 2
0x43C795: mov     esi, edx
0x43C797: rep movsd
0x43C799: mov     ecx, eax
0x43C79B: and     ecx, 3
0x43C79E: lea     eax, [esp+218h+var_108]
0x43C7A5: rep movsb
0x43C7A7: push    eax; int
0x43C7A8: lea     ecx, [esp+21Ch+Str1]
0x43C7AC: push    ecx; Str1
0x43C7AD: call    sub_47D8F0
0x43C7B2: mov     eax, [ebx+10h]
0x43C7B5: mov     edx, [ebx+14h]
0x43C7B8: add     esp, 8
0x43C7BB: push    ebx
0x43C7BC: mov     cl, 10h
0x43C7BE: call    __allshr
0x43C7C3: mov     ecx, ModelLoaderPtr
0x43C7C9: movzx   edx, al
0x43C7CC: push    edx
0x43C7CD: lea     eax, [esp+220h+var_108]
0x43C7D4: push    eax
0x43C7D5: call    sub_43B0D0
0x43C7DA: mov     edx, [ebx]
0x43C7DC: mov     eax, [edx+28h]
0x43C7DF: or      byte ptr [ebx+34h], 8
0x43C7E3: mov     ecx, ebx
0x43C7E5: call    eax
0x43C7E7: pop     edi
0x43C7E8: pop     esi
0x43C7E9: mov     eax, [ebx+2Ch]
0x43C7EC: xor     ecx, ecx
0x43C7EE: test    eax, eax
0x43C7F0: jz      short loc_43C7F5
0x43C7F2: lea     ecx, [eax+10h]
0x43C7F5: mov     edx, [ebx]
0x43C7F7: mov     eax, [edx+30h]
0x43C7FA: push    ecx
0x43C7FB: mov     ecx, ebx
0x43C7FD: call    eax
0x43C7FF: mov     ecx, [esp+210h+var_4]
0x43C806: pop     ebx
0x43C807: xor     ecx, esp
0x43C809: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43C80E: add     esp, 20Ch
0x43C814: retn
