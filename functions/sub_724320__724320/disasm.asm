0x724320: fld     [esp+arg_0]
0x724324: push    esi
0x724325: mov     esi, ecx
0x724327: test    byte ptr [esi+0DCh], 1
0x72432E: fst     dword ptr [esi+0E4h]
0x724334: jz      loc_7243D0
0x72433A: movzx   eax, byte ptr [esi+18h]
0x72433E: add     dword ptr [esi+0E8h], 1
0x724345: shr     al, 3
0x724348: push    ebx
0x724349: lea     ebx, [esi+0E8h]
0x72434F: and     eax, 0FFFFFF01h
0x724354: push    eax; updateProperties
0x724355: push    ecx
0x724356: fstp    [esp+10h+applicationTime]; applicationTime
0x724359: call    NiAVObject_UpdatePropertiesAndControllers; Update one NiAVObject's property controllers and attached NiTimeController chain. If requested, walk the property list at NiAVObject+0x9C and invoke property virtual +0x50 when its controller pointer is non-null. Always walk NiObjectNET.controller at object+0x0C through NiTimeController.next at +0x34 and invoke controller virtual Update +0x54 with applicationTime. No Active-bit prefilter occurs here: NiTimeController.flags+0x08 bit 3 only affects time-cache logic inside the controller. External Crossbow consequence after this Oblivion decode: temporarily clearing the base Active bit inside an already-entered morph hook will not by itself stop the next scene traversal, but pointer discovery still cannot make a graph that is not traversed dispatch Update.
0x72435E: mov     edx, [esi]
0x724360: mov     eax, [edx+74h]
0x724363: mov     ecx, esi
0x724365: call    eax
0x724367: mov     eax, [esi+0E0h]
0x72436D: test    eax, eax
0x72436F: jl      short loc_7243CB
0x724371: mov     ecx, [esi+0B0h]
0x724377: push    edi
0x724378: mov     edi, [ecx+eax*4]
0x72437B: test    edi, edi
0x72437D: jz      short loc_7243CA
0x72437F: mov     dl, [edi+18h]
0x724382: shr     dl, 1
0x724384: test    dl, 1
0x724387: jz      short loc_72439A
0x724389: mov     eax, [edi]
0x72438B: fld     [esp+0Ch+arg_0]
0x72438F: mov     edx, [eax+68h]
0x724392: push    ecx
0x724393: mov     ecx, edi
0x724395: fstp    [esp+10h+applicationTime]
0x724398: call    edx
0x72439A: mov     eax, [esi+0E0h]
0x7243A0: push    ebx
0x7243A1: push    eax
0x7243A2: lea     ecx, [esi+0ECh]
0x7243A8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7243AD: mov     edx, [edi+20h]
0x7243B0: lea     eax, [edi+20h]
0x7243B3: lea     ecx, [esi+20h]
0x7243B6: mov     [ecx], edx
0x7243B8: mov     edx, [eax+4]
0x7243BB: mov     [ecx+4], edx
0x7243BE: mov     edx, [eax+8]
0x7243C1: mov     [ecx+8], edx
0x7243C4: mov     eax, [eax+0Ch]
0x7243C7: mov     [ecx+0Ch], eax
0x7243CA: pop     edi
0x7243CB: pop     ebx
0x7243CC: pop     esi
0x7243CD: retn    4
0x7243D0: push    ecx
0x7243D1: fstp    [esp+8+var_8]; float
0x7243D4: call    sub_70A280; NiNode rigid selected downward: controllers, conditional vfunc+74 and local bound transform, child flag bit1 invokes synchronous vfunc+68 at 70A2F4, then RET 4. No queue/dispatch in this body. Observer completion is not proof of unrelated/async worker completion.
0x7243D9: pop     esi
0x7243DA: retn    4
