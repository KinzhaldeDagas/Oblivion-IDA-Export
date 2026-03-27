0x7AF240: push    0FFFFFFFFh
0x7AF242: push    offset SEH_7AF240
0x7AF247: mov     eax, large fs:0
0x7AF24D: push    eax
0x7AF24E: sub     esp, 8
0x7AF251: push    ebx
0x7AF252: push    ebp
0x7AF253: push    esi
0x7AF254: push    edi
0x7AF255: mov     eax, ds:0B30AACh
0x7AF25A: xor     eax, esp
0x7AF25C: push    eax
0x7AF25D: lea     eax, [esp+28h+var_C]
0x7AF261: mov     large fs:0, eax
0x7AF267: mov     edi, ecx
0x7AF269: xor     esi, esi
0x7AF26B: xor     ebx, ebx
0x7AF26D: mov     [esp+28h+var_14], esi
0x7AF271: lea     eax, [esp+28h+var_10]
0x7AF275: push    eax
0x7AF276: mov     [esp+2Ch+var_4], ebx
0x7AF27A: call    sub_7606A0
0x7AF27F: add     esp, 4
0x7AF282: mov     ebp, eax
0x7AF284: mov     ecx, [edi+94h]
0x7AF28A: cmp     ecx, [ebp+0]
0x7AF28D: mov     byte ptr [esp+28h+var_4], 1
0x7AF292: jz      short loc_7AF2B4
0x7AF294: cmp     ecx, ebx
0x7AF296: jz      short loc_7AF2A3
0x7AF298: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7AF29C: jnz     short loc_7AF2A3
0x7AF29E: call    sub_7604D0
0x7AF2A3: mov     eax, [ebp+0]
0x7AF2A6: cmp     eax, ebx
0x7AF2A8: mov     [edi+94h], eax
0x7AF2AE: jz      short loc_7AF2B4
0x7AF2B0: add     dword ptr [eax+60h], 1
0x7AF2B4: mov     eax, [esp+28h+var_10]
0x7AF2B8: cmp     eax, ebx
0x7AF2BA: mov     byte ptr [esp+28h+var_4], bl
0x7AF2BE: jz      short loc_7AF2D2
0x7AF2C0: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7AF2C4: mov     ecx, eax
0x7AF2C6: add     eax, 60h ; '`'
0x7AF2C9: cmp     [eax], ebx
0x7AF2CB: jnz     short loc_7AF2D2
0x7AF2CD: call    sub_7604D0
0x7AF2D2: lea     ecx, [esp+28h+var_10]
0x7AF2D6: push    ecx
0x7AF2D7: call    sub_772630
0x7AF2DC: add     esp, 4
0x7AF2DF: mov     eax, [eax]
0x7AF2E1: cmp     eax, ebx
0x7AF2E3: jz      short loc_7AF2EF
0x7AF2E5: mov     esi, eax
0x7AF2E7: add     dword ptr [esi+5Ch], 1
0x7AF2EB: mov     [esp+28h+var_14], esi
0x7AF2EF: mov     eax, [esp+28h+var_10]
0x7AF2F3: cmp     eax, ebx
0x7AF2F5: mov     byte ptr [esp+28h+var_4], bl
0x7AF2F9: jz      short loc_7AF30D
0x7AF2FB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7AF2FF: mov     ecx, eax
0x7AF301: add     eax, 5Ch ; '\'
0x7AF304: cmp     [eax], ebx
0x7AF306: jnz     short loc_7AF30D
0x7AF308: call    sub_772560
0x7AF30D: push    2
0x7AF30F: push    3
0x7AF311: push    ebx
0x7AF312: push    esi
0x7AF313: call    sub_801110
0x7AF318: add     esp, 10h
0x7AF31B: push    ebx
0x7AF31C: mov     ecx, esi
0x7AF31E: call    sub_771640
0x7AF323: mov     ecx, [edi+94h]; this
0x7AF329: mov     edx, [ecx+14h]
0x7AF32C: push    esi; a3
0x7AF32D: push    edx; a2
0x7AF32E: call    sub_760010
0x7AF333: lea     eax, [esp+28h+var_10]
0x7AF337: push    eax
0x7AF338: call    sub_772630
0x7AF33D: add     esp, 4
0x7AF340: mov     ebp, eax
0x7AF342: cmp     esi, [ebp+0]
0x7AF345: mov     byte ptr [esp+28h+var_4], 3
0x7AF34A: jz      short loc_7AF36C
0x7AF34C: cmp     esi, ebx
0x7AF34E: jz      short loc_7AF35D
0x7AF350: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7AF354: jnz     short loc_7AF35D
0x7AF356: mov     ecx, esi
0x7AF358: call    sub_772560
0x7AF35D: mov     esi, [ebp+0]
0x7AF360: cmp     esi, ebx
0x7AF362: mov     [esp+28h+var_14], esi
0x7AF366: jz      short loc_7AF36C
0x7AF368: add     dword ptr [esi+5Ch], 1
0x7AF36C: mov     eax, [esp+28h+var_10]
0x7AF370: cmp     eax, ebx
0x7AF372: mov     byte ptr [esp+28h+var_4], bl
0x7AF376: jz      short loc_7AF38A
0x7AF378: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7AF37C: mov     ecx, eax
0x7AF37E: add     eax, 5Ch ; '\'
0x7AF381: cmp     [eax], ebx
0x7AF383: jnz     short loc_7AF38A
0x7AF385: call    sub_772560
0x7AF38A: push    2
0x7AF38C: push    3
0x7AF38E: push    1
0x7AF390: push    esi
0x7AF391: call    sub_801110
0x7AF396: add     esp, 10h
0x7AF399: push    ebx
0x7AF39A: mov     ecx, esi
0x7AF39C: call    sub_771640
0x7AF3A1: mov     ecx, [edi+94h]; this
0x7AF3A7: mov     edx, [ecx+14h]
0x7AF3AA: push    esi; a3
0x7AF3AB: push    edx; a2
0x7AF3AC: call    sub_760010
0x7AF3B1: lea     eax, [esp+28h+var_10]
0x7AF3B5: push    eax
0x7AF3B6: call    sub_772630
0x7AF3BB: add     esp, 4
0x7AF3BE: mov     ebp, eax
0x7AF3C0: cmp     esi, [ebp+0]
0x7AF3C3: mov     byte ptr [esp+28h+var_4], 4
0x7AF3C8: jz      short loc_7AF3EA
0x7AF3CA: cmp     esi, ebx
0x7AF3CC: jz      short loc_7AF3DB
0x7AF3CE: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7AF3D2: jnz     short loc_7AF3DB
0x7AF3D4: mov     ecx, esi
0x7AF3D6: call    sub_772560
0x7AF3DB: mov     esi, [ebp+0]
0x7AF3DE: cmp     esi, ebx
0x7AF3E0: mov     [esp+28h+var_14], esi
0x7AF3E4: jz      short loc_7AF3EA
0x7AF3E6: add     dword ptr [esi+5Ch], 1
0x7AF3EA: mov     eax, [esp+28h+var_10]
0x7AF3EE: cmp     eax, ebx
0x7AF3F0: mov     byte ptr [esp+28h+var_4], bl
0x7AF3F4: jz      short loc_7AF408
0x7AF3F6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7AF3FA: mov     ecx, eax
0x7AF3FC: add     eax, 5Ch ; '\'
0x7AF3FF: cmp     [eax], ebx
0x7AF401: jnz     short loc_7AF408
0x7AF403: call    sub_772560
0x7AF408: push    2
0x7AF40A: push    3
0x7AF40C: push    2
0x7AF40E: push    esi
0x7AF40F: call    sub_801110
0x7AF414: add     esp, 10h
0x7AF417: push    ebx
0x7AF418: mov     ecx, esi
0x7AF41A: call    sub_771640
0x7AF41F: mov     ecx, [edi+94h]; this
0x7AF425: mov     edx, [ecx+14h]
0x7AF428: push    esi; a3
0x7AF429: push    edx; a2
0x7AF42A: call    sub_760010
0x7AF42F: mov     ebp, [edi+94h]
0x7AF435: cmp     [ebp+30h], ebx
0x7AF438: jnz     short loc_7AF442
0x7AF43A: call    sub_772DF0
0x7AF43F: mov     [ebp+30h], eax
0x7AF442: mov     ecx, [ebp+30h]
0x7AF445: push    ebx
0x7AF446: push    ebx
0x7AF447: push    7
0x7AF449: call    sub_772CD0
0x7AF44E: mov     ebp, [edi+94h]
0x7AF454: cmp     [ebp+30h], ebx
0x7AF457: jnz     short loc_7AF461
0x7AF459: call    sub_772DF0
0x7AF45E: mov     [ebp+30h], eax
0x7AF461: mov     ecx, [ebp+30h]
0x7AF464: push    ebx
0x7AF465: push    ebx
0x7AF466: push    0Eh
0x7AF468: call    sub_772CD0
0x7AF46D: mov     ebp, [edi+94h]
0x7AF473: cmp     [ebp+30h], ebx
0x7AF476: jnz     short loc_7AF480
0x7AF478: call    sub_772DF0
0x7AF47D: mov     [ebp+30h], eax
0x7AF480: mov     ecx, [ebp+30h]
0x7AF483: push    ebx
0x7AF484: push    ebx
0x7AF485: push    1Bh
0x7AF487: call    sub_772CD0
0x7AF48C: mov     ebp, [edi+94h]
0x7AF492: cmp     [ebp+30h], ebx
0x7AF495: jnz     short loc_7AF49F
0x7AF497: call    sub_772DF0
0x7AF49C: mov     [ebp+30h], eax
0x7AF49F: mov     ecx, [ebp+30h]
0x7AF4A2: push    ebx
0x7AF4A3: push    ebx
0x7AF4A4: push    0Fh
0x7AF4A6: call    sub_772CD0
0x7AF4AB: mov     ebp, [edi+94h]
0x7AF4B1: cmp     [ebp+30h], ebx
0x7AF4B4: jnz     short loc_7AF4BE
0x7AF4B6: call    sub_772DF0
0x7AF4BB: mov     [ebp+30h], eax
0x7AF4BE: mov     ecx, [ebp+30h]
0x7AF4C1: push    ebx
0x7AF4C2: push    0Fh
0x7AF4C4: push    0A8h ; '¨'
0x7AF4C9: call    sub_772CD0
0x7AF4CE: mov     eax, [edi]
0x7AF4D0: mov     edx, [eax+0B8h]
0x7AF4D6: mov     ecx, edi
0x7AF4D8: call    edx
0x7AF4DA: or      eax, 0FFFFFFFFh
0x7AF4DD: cmp     esi, ebx
0x7AF4DF: mov     [esp+28h+var_4], eax
0x7AF4E3: jz      short loc_7AF4F1
0x7AF4E5: add     [esi+5Ch], eax
0x7AF4E8: jnz     short loc_7AF4F1
0x7AF4EA: mov     ecx, esi
0x7AF4EC: call    sub_772560
0x7AF4F1: mov     al, 1
0x7AF4F3: mov     ecx, [esp+28h+var_C]
0x7AF4F7: mov     large fs:0, ecx
0x7AF4FE: pop     ecx
0x7AF4FF: pop     edi
0x7AF500: pop     esi
0x7AF501: pop     ebp
0x7AF502: pop     ebx
0x7AF503: add     esp, 14h
0x7AF506: retn
