0x8BA6F0: push    ebp
0x8BA6F1: mov     ebp, esp
0x8BA6F3: and     esp, 0FFFFFFF0h
0x8BA6F6: sub     esp, 38h
0x8BA6F9: mov     eax, ds:0B30AACh
0x8BA6FE: xor     eax, esp
0x8BA700: mov     [esp+38h+var_4], eax
0x8BA704: push    esi
0x8BA705: mov     esi, [ebp+arg_0]
0x8BA708: push    edi
0x8BA709: push    esi
0x8BA70A: mov     edi, ecx
0x8BA70C: call    sub_89F580
0x8BA711: lea     eax, [esp+40h+var_30]
0x8BA715: push    eax
0x8BA716: mov     ecx, edi
0x8BA718: call    sub_88D820
0x8BA71D: movaps  xmm0, [esp+40h+var_30]
0x8BA722: mov     ecx, [esp+40h+var_4]
0x8BA726: movaps  xmmword ptr [esi+20h], xmm0
0x8BA72A: movaps  xmm0, [esp+40h+var_20]
0x8BA72F: pop     edi
0x8BA730: movaps  xmmword ptr [esi+30h], xmm0
0x8BA734: pop     esi
0x8BA735: xor     ecx, esp
0x8BA737: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BA73C: mov     esp, ebp
0x8BA73E: pop     ebp
0x8BA73F: retn    4
