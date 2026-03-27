0x8CA540: sub     esp, 210h
0x8CA546: mov     eax, ds:0B30AACh
0x8CA54B: push    ebx
0x8CA54C: xor     ebx, ebx
0x8CA54E: push    ebp
0x8CA54F: push    esi
0x8CA550: mov     esi, ecx
0x8CA552: mov     word ptr [esi+6], 1
0x8CA558: mov     dword ptr [esi], offset off_A99AE8
0x8CA55E: mov     [esi+8], ebx
0x8CA561: mov     ecx, [esp+21Ch+arg_4]
0x8CA568: mov     [esi+0Ch], ebx
0x8CA56B: mov     [esi+10h], ebx
0x8CA56E: mov     [esp+21Ch+var_4], eax
0x8CA575: mov     eax, 80000000h
0x8CA57A: mov     [esi+14h], eax
0x8CA57D: mov     [esi+18h], ebx
0x8CA580: mov     [esi+1Ch], ebx
0x8CA583: mov     [esi+20h], eax
0x8CA586: mov     [esi+24h], ebx
0x8CA589: mov     [esi+28h], ebx
0x8CA58C: mov     [esi+2Ch], eax
0x8CA58F: mov     [esi+30h], ebx
0x8CA592: mov     [esi+34h], ebx
0x8CA595: mov     [esi+38h], eax
0x8CA598: mov     [esi+3Ch], ebx
0x8CA59B: mov     [esi+40h], ebx
0x8CA59E: mov     [esi+44h], eax
0x8CA5A1: mov     [esi+48h], ecx
0x8CA5A4: mov     [esi+4Ch], ebx
0x8CA5A7: mov     [esi+50h], ebx
0x8CA5AA: mov     [esi+54h], eax
0x8CA5AD: mov     [esi+58h], bl
0x8CA5B0: mov     dword ptr [esi+88h], offset aFrameTimer; "Frame Timer"
0x8CA5BA: mov     [esi+60h], ebx
0x8CA5BD: mov     [esi+64h], ebx
0x8CA5C0: mov     [esi+68h], ebx
0x8CA5C3: mov     [esi+6Ch], ebx
0x8CA5C6: mov     [esi+70h], ebx
0x8CA5C9: mov     [esi+74h], ebx
0x8CA5CC: mov     [esi+78h], ebx
0x8CA5CF: mov     [esi+7Ch], ebx
0x8CA5D2: mov     [esi+80h], bl
0x8CA5D8: mov     [esi+84h], ebx
0x8CA5DE: mov     ecx, [esi+20h]
0x8CA5E1: push    edi
0x8CA5E2: mov     edi, [esp+220h+arg_0]
0x8CA5E9: mov     ebp, [edi+4]
0x8CA5EC: mov     edx, ecx
0x8CA5EE: and     edx, 3FFFFFFFh
0x8CA5F4: cmp     edx, ebp
0x8CA5F6: jge     short loc_8CA668
0x8CA5F8: test    eax, ecx
0x8CA5FA: mov     ebp, ds:0BA9DE4h
0x8CA600: jnz     short loc_8CA62B
0x8CA602: mov     eax, large fs:2Ch
0x8CA608: mov     ecx, [eax+ebp*4]
0x8CA60B: mov     eax, [ecx+19Ch]
0x8CA611: cmp     eax, ebx
0x8CA613: jnz     short loc_8CA61A
0x8CA615: mov     eax, ds:0BA7D9Ch
0x8CA61A: mov     ecx, [esi+18h]
0x8CA61D: push    14h
0x8CA61F: shl     edx, 2
0x8CA622: push    edx
0x8CA623: push    ecx
0x8CA624: mov     ecx, eax
0x8CA626: call    sub_8A75D0
0x8CA62B: mov     edx, large fs:2Ch
0x8CA632: mov     eax, [edx+ebp*4]
0x8CA635: mov     eax, [eax+19Ch]
0x8CA63B: cmp     eax, ebx
0x8CA63D: jnz     short loc_8CA644
0x8CA63F: mov     eax, ds:0BA7D9Ch
0x8CA644: mov     ecx, [edi+4]
0x8CA647: shl     ecx, 2
0x8CA64A: push    14h
0x8CA64C: push    ecx
0x8CA64D: mov     ecx, eax
0x8CA64F: call    sub_8A7560
0x8CA654: mov     edx, [esi+20h]
0x8CA657: mov     [esi+18h], eax
0x8CA65A: mov     eax, [edi+4]
0x8CA65D: and     edx, 40000000h
0x8CA663: or      edx, eax
0x8CA665: mov     [esi+20h], edx
0x8CA668: mov     ecx, [edi+4]
0x8CA66B: cmp     ecx, ebx
0x8CA66D: mov     eax, [esi+18h]
0x8CA670: mov     [esi+1Ch], ecx
0x8CA673: mov     edx, [edi]
0x8CA675: jle     short loc_8CA68B
0x8CA677: sub     edx, eax
0x8CA679: lea     esp, [esp+0]
0x8CA680: mov     edi, [edx+eax]
0x8CA683: mov     [eax], edi
0x8CA685: add     eax, 4
0x8CA688: dec     ecx
0x8CA689: jnz     short loc_8CA680
0x8CA68B: mov     eax, [esi+1Ch]
0x8CA68E: xor     edi, edi
0x8CA690: cmp     eax, ebx
0x8CA692: jle     short loc_8CA6A8
0x8CA694: mov     eax, [esi+18h]
0x8CA697: mov     ecx, [eax+edi*4]
0x8CA69A: mov     edx, [ecx]
0x8CA69C: push    esi
0x8CA69D: call    dword ptr [edx+8]
0x8CA6A0: mov     eax, [esi+1Ch]
0x8CA6A3: inc     edi
0x8CA6A4: cmp     edi, eax
0x8CA6A6: jl      short loc_8CA694
0x8CA6A8: mov     ecx, ds:0BA7FB0h
0x8CA6AE: mov     eax, [ecx]
0x8CA6B0: push    offset aVisualDebugger; "Visual Debugger"
0x8CA6B5: push    1293ADEFh
0x8CA6BA: call    dword ptr [eax+18h]
0x8CA6BD: push    ecx
0x8CA6BE: mov     eax, esp
0x8CA6C0: push    200h
0x8CA6C5: lea     ecx, [esp+228h+var_204]
0x8CA6C9: push    ecx
0x8CA6CA: lea     ecx, [esp+22Ch+var_210]
0x8CA6CE: mov     byte ptr [eax], 1
0x8CA6D1: call    sub_8BBFB0
0x8CA6D6: push    offset aVdbServerInsta; "VDB Server instance has been created"
0x8CA6DB: lea     ecx, [esp+224h+var_210]
0x8CA6DF: call    sub_8BBDB0
0x8CA6E4: mov     ecx, ds:0BA7FB0h
0x8CA6EA: mov     edx, [ecx]
0x8CA6EC: push    26h ; '&'
0x8CA6EE: push    offset a_Hkvisualdebug; ".\\hkVisualDebugger.cpp"
0x8CA6F3: lea     eax, [esp+228h+var_204]
0x8CA6F7: push    eax
0x8CA6F8: push    0FFFFFFFFh
0x8CA6FA: push    ebx
0x8CA6FB: call    dword ptr [edx+8]
0x8CA6FE: lea     ecx, [esp+220h+var_210]
0x8CA702: call    sub_8BC000
0x8CA707: call    sub_9184F0
0x8CA70C: push    offset aDebugdisplay; "DebugDisplay"
0x8CA711: mov     ecx, esi
0x8CA713: call    sub_8CA3C0
0x8CA718: push    offset aShapes; "Shapes"
0x8CA71D: mov     ecx, esi
0x8CA71F: call    sub_8CA3C0
0x8CA724: push    offset aMousepicking; "MousePicking"
0x8CA729: mov     ecx, esi
0x8CA72B: call    sub_8CA3C0
0x8CA730: mov     eax, [esi+48h]
0x8CA733: cmp     eax, ebx
0x8CA735: jz      short loc_8CA741
0x8CA737: cmp     [eax+4], bx
0x8CA73B: jz      short loc_8CA741
0x8CA73D: inc     word ptr [eax+6]
0x8CA741: mov     ecx, ds:0BA7FB0h
0x8CA747: mov     edx, [ecx]
0x8CA749: call    dword ptr [edx+1Ch]
0x8CA74C: mov     ecx, [esp+220h+var_4]
0x8CA753: mov     eax, esi
0x8CA755: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CA75A: pop     edi
0x8CA75B: pop     esi
0x8CA75C: pop     ebp
0x8CA75D: pop     ebx
0x8CA75E: add     esp, 210h
0x8CA764: retn    8
