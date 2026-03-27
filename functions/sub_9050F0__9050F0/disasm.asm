0x9050F0: push    ebp
0x9050F1: mov     ebp, esp
0x9050F3: and     esp, 0FFFFFFF0h
0x9050F6: sub     esp, 234h
0x9050FC: mov     eax, ds:0B30AACh
0x905101: mov     ecx, ds:0BA9DE4h
0x905107: push    ebx
0x905108: mov     ebx, large fs:2Ch
0x90510F: mov     [esp+238h+var_4], eax
0x905116: mov     eax, [ebx+ecx*4]
0x905119: mov     edx, [eax+1A4h]
0x90511F: push    esi
0x905120: cmp     edx, [eax+1A8h]
0x905126: push    edi
0x905127: jnb     short loc_90514D
0x905129: mov     esi, eax
0x90512B: mov     ecx, [esi+1A4h]
0x905131: mov     dword ptr [ecx], offset aTtshapecollect; "TtShapeCollection"
0x905137: rdtsc
0x905139: mov     [esp+240h+var_228], eax
0x90513D: mov     eax, [esp+240h+var_228]
0x905141: mov     [ecx+4], eax
0x905144: add     ecx, 0Ch
0x905147: mov     [esi+1A4h], ecx
0x90514D: mov     eax, [ebp+arg_0]
0x905150: mov     ecx, [eax+8]
0x905153: mov     edx, [ebp+arg_4]
0x905156: mov     esi, [eax]
0x905158: mov     [esp+240h+var_218], ecx
0x90515C: mov     ecx, [edx]
0x90515E: mov     [esp+240h+var_214], eax
0x905162: mov     eax, [ecx]
0x905164: call    dword ptr [eax+8]
0x905167: mov     edx, [esi]
0x905169: mov     ecx, esi
0x90516B: mov     [esp+240h+var_228], eax
0x90516F: call    dword ptr [edx+20h]
0x905172: mov     edi, eax
0x905174: cmp     edi, 0FFFFFFFFh
0x905177: jz      loc_9051FC
0x90517D: mov     ebx, [ebp+arg_8]
0x905180: mov     edx, [ebp+arg_0]
0x905183: mov     ecx, [ebx+4]
0x905186: mov     eax, [ecx]
0x905188: push    edi
0x905189: push    esi
0x90518A: push    edx
0x90518B: mov     edx, [ebp+arg_4]
0x90518E: push    edx
0x90518F: push    ebx
0x905190: lea     edx, [esp+254h+var_221]
0x905194: push    edx
0x905195: call    dword ptr [eax]
0x905197: cmp     byte ptr [eax], 0
0x90519A: jz      short loc_9051E6
0x90519C: mov     eax, [esi]
0x90519E: lea     ecx, [esp+240h+var_210]
0x9051A2: push    ecx
0x9051A3: push    edi
0x9051A4: mov     ecx, esi
0x9051A6: call    dword ptr [eax+28h]
0x9051A9: mov     [esp+240h+var_220], eax
0x9051AD: mov     [esp+240h+var_21C], edi
0x9051B1: mov     edx, [eax]
0x9051B3: mov     ecx, eax
0x9051B5: call    dword ptr [edx+8]
0x9051B8: mov     ecx, [ebx]
0x9051BA: mov     edx, [esp+240h+var_228]
0x9051BE: shl     eax, 5
0x9051C1: add     eax, ecx
0x9051C3: movzx   eax, byte ptr [eax+edx+190h]
0x9051CB: mov     edx, [ebp+arg_C]
0x9051CE: push    edx
0x9051CF: mov     edx, [ebp+arg_4]
0x9051D2: push    ebx
0x9051D3: push    edx
0x9051D4: lea     edx, [esp+24Ch+var_220]
0x9051D8: lea     eax, [eax+eax*4]
0x9051DB: push    edx
0x9051DC: call    dword ptr [ecx+eax*4+998h]
0x9051E3: add     esp, 10h
0x9051E6: mov     eax, [esi]
0x9051E8: push    edi
0x9051E9: mov     ecx, esi
0x9051EB: call    dword ptr [eax+24h]
0x9051EE: mov     edi, eax
0x9051F0: cmp     edi, 0FFFFFFFFh
0x9051F3: jnz     short loc_905180
0x9051F5: mov     ebx, large fs:2Ch
0x9051FC: mov     ecx, ds:0BA9DE4h
0x905202: mov     eax, [ebx+ecx*4]
0x905205: mov     edx, [eax+1A4h]
0x90520B: cmp     edx, [eax+1A8h]
0x905211: jnb     short loc_905237
0x905213: mov     esi, eax
0x905215: mov     ecx, [esi+1A4h]
0x90521B: mov     dword ptr [ecx], offset aEt; "Et"
0x905221: rdtsc
0x905223: mov     [esp+240h+var_228], eax
0x905227: mov     eax, [esp+240h+var_228]
0x90522B: mov     [ecx+4], eax
0x90522E: add     ecx, 0Ch
0x905231: mov     [esi+1A4h], ecx
0x905237: mov     ecx, [esp+240h+var_4]
0x90523E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x905243: pop     edi
0x905244: pop     esi
0x905245: pop     ebx
0x905246: mov     esp, ebp
0x905248: pop     ebp
0x905249: retn
