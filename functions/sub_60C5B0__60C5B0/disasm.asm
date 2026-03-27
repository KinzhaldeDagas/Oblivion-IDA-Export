0x60C5B0: push    ebp
0x60C5B1: mov     ebp, esp
0x60C5B3: and     esp, 0FFFFFFF0h
0x60C5B6: push    0FFFFFFFFh
0x60C5B8: push    offset SEH_60C5B0
0x60C5BD: mov     eax, large fs:0
0x60C5C3: push    eax
0x60C5C4: sub     esp, 2B8h
0x60C5CA: mov     eax, ds:0B30AACh
0x60C5CF: xor     eax, esp
0x60C5D1: mov     [esp+2C4h+var_14], eax
0x60C5D8: push    ebx
0x60C5D9: push    esi
0x60C5DA: push    edi
0x60C5DB: mov     eax, ds:0B30AACh
0x60C5E0: xor     eax, esp
0x60C5E2: push    eax
0x60C5E3: lea     eax, [esp+2D4h+var_C]
0x60C5EA: mov     large fs:0, eax
0x60C5F0: mov     edi, ecx
0x60C5F2: mov     eax, [edi]
0x60C5F4: mov     edx, [eax+154h]
0x60C5FA: call    edx
0x60C5FC: mov     ecx, [edi+78h]
0x60C5FF: cmp     ecx, ds:0B333C4h
0x60C605: jnz     loc_60C91B
0x60C60B: xor     ebx, ebx
0x60C60D: cmp     eax, ebx
0x60C60F: jz      loc_60C91B
0x60C615: mov     edx, [edi]
0x60C617: fld1
0x60C619: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x60C620: fstp    [esp+2D4h+var_240.WorldRayCastOutput.HitFraction]
0x60C627: mov     eax, [edx+174h]
0x60C62D: mov     ecx, edi
0x60C62F: mov     [esp+2D4h+var_240.WorldRayCastInput.EnableShapeCollectionFilter], bl
0x60C636: mov     [esp+2D4h+var_240.WorldRayCastInput.FilterInfo], ebx
0x60C63D: mov     [esp+2D4h+var_240.WorldRayCastOutput.RootCollidable], ebx
0x60C644: mov     [esp+2D4h+var_240.BroadPhaseAabbCache], ebx
0x60C64B: mov     [esp+2D4h+var_240.RayHitCollector1], ebx
0x60C652: mov     [esp+2D4h+var_240.RayHitCollector2], ebx
0x60C659: movaps  xmmword ptr [esp+2D4h+var_240.unk60.x], xmm0
0x60C661: call    eax
0x60C663: mov     ecx, [eax]
0x60C665: mov     edx, [eax+4]
0x60C668: mov     eax, [eax+8]
0x60C66B: mov     [esp+2D4h+a2.x], ecx
0x60C66F: mov     ecx, ds:0B333C4h
0x60C675: mov     [esp+2D4h+a2.y], edx
0x60C679: mov     edx, [ecx]
0x60C67B: mov     [esp+2D4h+a2.z], eax
0x60C67F: mov     eax, [edx+174h]
0x60C685: call    eax
0x60C687: mov     ecx, [eax]
0x60C689: mov     edx, [eax+4]
0x60C68C: mov     eax, [eax+8]
0x60C68F: mov     [esp+2D4h+var_2A4], ecx
0x60C693: mov     ecx, ds:0B333C4h
0x60C699: fld     dword ptr [ecx+5D4h]
0x60C69F: mov     [esp+2D4h+var_2A0], edx
0x60C6A3: mov     edx, [ecx]
0x60C6A5: fstp    [esp+2D4h+var_298]
0x60C6A9: mov     [esp+2D4h+var_29C], eax
0x60C6AD: mov     eax, [edx+0ECh]
0x60C6B3: call    eax
0x60C6B5: fmul    [esp+2D4h+var_298]
0x60C6B9: mov     ecx, edi; this
0x60C6BB: fadd    [esp+2D4h+var_29C]
0x60C6BF: fstp    [esp+2D4h+var_29C]
0x60C6C3: fld     [esp+2D4h+a2.x]
0x60C6C7: fsub    [esp+2D4h+var_2A4]
0x60C6CB: fstp    [esp+2D4h+var_288]
0x60C6CF: fld     [esp+2D4h+a2.y]
0x60C6D3: fsub    [esp+2D4h+var_2A0]
0x60C6D7: fstp    dword ptr [esp+2D4h+var_284]
0x60C6DB: fld     [esp+2D4h+a2.z]
0x60C6DF: fsub    [esp+2D4h+var_29C]
0x60C6E3: fstp    [esp+2D4h+var_298]
0x60C6E7: call    MobileObject_GetCharProxy
0x60C6EC: cmp     eax, ebx
0x60C6EE: jz      short loc_60C6FE
0x60C6F0: lea     ecx, [esp+2D4h+var_2B0]
0x60C6F4: push    ecx
0x60C6F5: mov     ecx, eax
0x60C6F7: call    sub_57E270
0x60C6FC: jmp     short loc_60C70E
0x60C6FE: mov     ecx, ds:0B333C4h
0x60C704: lea     edx, [esp+2D4h+var_2B0]
0x60C708: push    edx
0x60C709: call    sub_65ABE0
0x60C70E: mov     eax, [eax]
0x60C710: mov     [esp+2D4h+var_240.WorldRayCastInput.FilterInfo], eax
0x60C717: lea     eax, [esp+2D4h+var_2A4]
0x60C71B: push    eax
0x60C71C: lea     ecx, [esp+2D8h+var_240]
0x60C723: call    bhkWorldRayCastData__SetCastInputFrom
0x60C728: fld     [esp+2D4h+var_288]
0x60C72C: fadd    [esp+2D4h+var_2A4]
0x60C730: lea     ecx, [esp+2D4h+a2]
0x60C734: push    ecx; a2
0x60C735: lea     ecx, [esp+2D8h+var_240]; this
0x60C73C: fstp    [esp+2D8h+var_2AC]
0x60C740: fld     [esp+2D8h+var_2A0]
0x60C744: fadd    dword ptr [esp+2D8h+var_284]
0x60C748: fstp    [esp+2D8h+var_2A8]
0x60C74C: fld     [esp+2D8h+var_298]
0x60C750: fadd    [esp+2D8h+var_29C]
0x60C754: fstp    [esp+2D8h+var_2B4]
0x60C758: fld     [esp+2D8h+var_2AC]
0x60C75C: fstp    [esp+2D8h+a2.x]
0x60C760: fld     [esp+2D8h+var_2A8]
0x60C764: fstp    [esp+2D8h+a2.y]
0x60C768: fld     [esp+2D8h+var_2B4]
0x60C76C: fstp    [esp+2D8h+a2.z]
0x60C770: call    bhkWorldRayCastData__SetCastInputTo
0x60C775: lea     ecx, [esp+2D4h+var_1C0]
0x60C77C: call    sub_538C00
0x60C781: mov     ecx, ds:0B333C4h; this
0x60C787: lea     edx, [esp+2D4h+var_1C0]
0x60C78E: mov     [esp+2D4h+var_4], ebx
0x60C795: mov     [esp+2D4h+var_240.RayHitCollector2], edx
0x60C79C: mov     [esp+2D4h+var_240.RayHitCollector1], ebx
0x60C7A3: call    TESObjectREFR_GetParentCell
0x60C7A8: mov     esi, eax
0x60C7AA: mov     ecx, esi; this
0x60C7AC: call    TESObjectCELL_IsInterior
0x60C7B1: test    al, al
0x60C7B3: jz      short loc_60C7BF
0x60C7B5: lea     ecx, [esi+28h]
0x60C7B8: call    sub_424180
0x60C7BD: jmp     short loc_60C7C4
0x60C7BF: mov     eax, ds:0B35C24h
0x60C7C4: mov     edx, [eax]
0x60C7C6: mov     edx, [edx+88h]
0x60C7CC: lea     ecx, [esp+2D4h+var_240]
0x60C7D3: push    ecx
0x60C7D4: mov     ecx, eax
0x60C7D6: call    edx
0x60C7D8: test    al, al
0x60C7DA: jz      loc_60C904
0x60C7E0: mov     byte ptr [esp+2D4h+var_2B8+3], 1
0x60C7E5: mov     [esp+2D4h+var_2AC], ebx
0x60C7E9: xor     esi, esi
0x60C7EB: mov     eax, [esp+2D4h+var_2AC]
0x60C7EF: cmp     eax, [esp+2D4h+var_1AC]
0x60C7F6: jge     loc_60C904
0x60C7FC: mov     eax, [esp+2D4h+var_1B0]
0x60C803: movaps  xmm0, xmmword ptr [esi+eax]
0x60C807: movaps  [esp+2D4h+var_284+4], xmm0
0x60C80C: mov     ecx, [esi+eax+10h]
0x60C810: mov     [esp+2D4h+var_270], ecx
0x60C814: fld     dword ptr [esi+eax+14h]
0x60C818: fstp    [esp+2D4h+var_26C]
0x60C81C: mov     eax, [esi+eax+20h]
0x60C820: push    eax
0x60C821: mov     [esp+2D8h+var_260], eax
0x60C825: call    sub_4806E0
0x60C82A: add     esp, 4
0x60C82D: cmp     eax, ebx
0x60C82F: jz      loc_60C8F2
0x60C835: push    eax
0x60C836: call    sub_4DC270
0x60C83B: add     esp, 4
0x60C83E: cmp     eax, ebx
0x60C840: jz      loc_60C8F2
0x60C846: cmp     eax, ds:0B333C4h
0x60C84C: jz      loc_60C8F2
0x60C852: cmp     eax, edi
0x60C854: jz      loc_60C8F2
0x60C85A: fld     [esp+2D4h+var_288]
0x60C85E: lea     edx, [esp+2D4h+a2]
0x60C862: fld     [esp+2D4h+var_26C]
0x60C866: push    edx
0x60C867: fld     st
0x60C869: lea     eax, [esp+2D8h+var_250]
0x60C870: fmulp   st(2), st
0x60C872: push    eax
0x60C873: fxch    st(1)
0x60C875: fstp    [esp+2DCh+var_2B4]
0x60C879: fld     dword ptr [esp+2DCh+var_284]
0x60C87D: fmul    st, st(1)
0x60C87F: fstp    [esp+2DCh+var_2A8]
0x60C883: fmul    [esp+2DCh+var_298]
0x60C887: fstp    [esp+2DCh+var_2B0]
0x60C88B: fld     [esp+2DCh+var_2B4]
0x60C88F: fadd    [esp+2DCh+var_2A4]
0x60C893: fstp    [esp+2DCh+var_2B4]
0x60C897: fld     [esp+2DCh+var_2A0]
0x60C89B: fadd    [esp+2DCh+var_2A8]
0x60C89F: fstp    [esp+2DCh+var_2A8]
0x60C8A3: fld     [esp+2DCh+var_2B0]
0x60C8A7: fadd    [esp+2DCh+var_29C]
0x60C8AB: fstp    [esp+2DCh+var_2B0]
0x60C8AF: fld     [esp+2DCh+var_2B4]
0x60C8B3: fstp    [esp+2DCh+a2.x]
0x60C8B7: fld     [esp+2DCh+var_2A8]
0x60C8BB: fstp    [esp+2DCh+a2.y]
0x60C8BF: fld     [esp+2DCh+var_2B0]
0x60C8C3: fstp    [esp+2DCh+a2.z]
0x60C8C7: call    sub_4529E0
0x60C8CC: mov     eax, [esp+2DCh+var_260]
0x60C8D0: lea     ecx, [esp+2DCh+var_284+4]
0x60C8D4: push    ecx
0x60C8D5: lea     edx, [esp+2E0h+var_250]
0x60C8DC: push    edx
0x60C8DD: push    eax
0x60C8DE: push    edi
0x60C8DF: call    sub_60D950
0x60C8E4: add     esp, 18h
0x60C8E7: mov     ecx, edi
0x60C8E9: call    sub_60BE90
0x60C8EE: mov     byte ptr [esp+2D4h+var_2B8+3], bl
0x60C8F2: add     [esp+2D4h+var_2AC], 1
0x60C8F7: add     esi, 30h ; '0'
0x60C8FA: cmp     byte ptr [esp+2D4h+var_2B8+3], bl
0x60C8FE: jnz     loc_60C7EB
0x60C904: lea     ecx, [esp+2D4h+var_1C0]
0x60C90B: mov     [esp+2D4h+var_4], 0FFFFFFFFh
0x60C916: call    sub_538C80
0x60C91B: mov     ecx, dword ptr [esp+2D4h+var_C]
0x60C922: mov     large fs:0, ecx
0x60C929: pop     ecx
0x60C92A: pop     edi
0x60C92B: pop     esi
0x60C92C: pop     ebx
0x60C92D: mov     ecx, [esp+2C4h+var_14]
0x60C934: xor     ecx, esp
0x60C936: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60C93B: mov     esp, ebp
0x60C93D: pop     ebp
0x60C93E: retn
