0x8A2950: push    0FFFFFFFFh
0x8A2952: push    offset SEH_8094D0
0x8A2957: mov     eax, large fs:0
0x8A295D: push    eax
0x8A295E: push    ebx
0x8A295F: push    ebp
0x8A2960: push    esi
0x8A2961: push    edi
0x8A2962: mov     eax, ds:0B30AACh
0x8A2967: xor     eax, esp
0x8A2969: push    eax
0x8A296A: lea     eax, [esp+20h+var_C]
0x8A296E: mov     large fs:0, eax
0x8A2974: mov     ebp, [esp+20h+arg_0]
0x8A2978: test    ebp, ebp
0x8A297A: jz      loc_8A2A30
0x8A2980: cmp     byte ptr ds:0BA7D74h, 0
0x8A2987: jz      loc_8A2A30
0x8A298D: mov     eax, [ecx+10h]
0x8A2990: lea     eax, [eax+eax*2]
0x8A2993: mov     esi, ds:0B2E988h[eax*4]
0x8A299A: mov     edi, ds:0B2E98Ch[eax*4]
0x8A29A1: mov     ebx, ds:0B2E990h[eax*4]
0x8A29A8: lea     eax, ds:0B2E988h[eax*4]
0x8A29AF: push    5Ch ; '\'; Size
0x8A29B1: call    FormHeapAlloc
0x8A29B6: add     esp, 4
0x8A29B9: mov     [esp+20h+arg_0], eax
0x8A29BD: test    eax, eax
0x8A29BF: mov     [esp+20h+var_4], 0
0x8A29C7: jz      short loc_8A29D2
0x8A29C9: mov     ecx, eax; this
0x8A29CB: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x8A29D0: jmp     short loc_8A29D4
0x8A29D2: xor     eax, eax
0x8A29D4: mov     ecx, ds:0B25AC4h
0x8A29DA: mov     [eax+1Ch], ecx
0x8A29DD: mov     edx, ds:0B25AC8h
0x8A29E3: mov     [eax+20h], edx
0x8A29E6: mov     ecx, ds:0B25ACCh
0x8A29EC: add     dword ptr [eax+54h], 1
0x8A29F0: mov     [eax+24h], ecx
0x8A29F3: mov     edx, ds:0B25AC4h
0x8A29F9: mov     ecx, [eax+54h]
0x8A29FC: mov     [eax+28h], edx
0x8A29FF: mov     edx, ds:0B25AC8h
0x8A2A05: mov     [eax+2Ch], edx
0x8A2A08: mov     edx, ds:0B25ACCh
0x8A2A0E: add     ecx, 2
0x8A2A11: mov     [eax+40h], esi
0x8A2A14: mov     [eax+54h], ecx
0x8A2A17: mov     [eax+44h], edi
0x8A2A1A: push    eax; a2
0x8A2A1B: mov     ecx, ebp; this
0x8A2A1D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8A2A25: mov     [eax+30h], edx
0x8A2A28: mov     [eax+48h], ebx
0x8A2A2B: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x8A2A30: mov     ecx, [esp+20h+var_C]
0x8A2A34: mov     large fs:0, ecx
0x8A2A3B: pop     ecx
0x8A2A3C: pop     edi
0x8A2A3D: pop     esi
0x8A2A3E: pop     ebp
0x8A2A3F: pop     ebx
0x8A2A40: add     esp, 0Ch
0x8A2A43: retn    4
0x9C6200: mov     eax, [ebp+4]
0x9C6203: push    eax
0x9C6204: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C6209: pop     ecx
0x9C620A: retn
0x9C620B: mov     edx, [esp+arg_4]
0x9C620F: lea     eax, [edx-10h]
0x9C6212: mov     ecx, [edx-14h]
0x9C6215: xor     ecx, eax
0x9C6217: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C621C: mov     eax, offset stru_AEE7E8
0x9C6221: jmp     ___CxxFrameHandler3
