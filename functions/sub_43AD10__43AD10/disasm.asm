0x43AD10: push    ecx; QueuedDistantLOD load-complete path: loads queued model, applies transform/context through 0x435060, then enqueues completion on IO manager queue.
0x43AD11: push    esi
0x43AD12: push    edi
0x43AD13: mov     esi, ecx
0x43AD15: call    QueuedTexture_LoadModelStream; Queued texture/model stream loader. Checks model-loader cache for the requested path, otherwise opens archive/loose file data and builds the stream-backed object.
0x43AD1A: mov     eax, [esi+28h]
0x43AD1D: test    eax, eax
0x43AD1F: jz      short loc_43AD4E
0x43AD21: mov     ecx, [esi+38h]
0x43AD24: push    ecx; instanceData
0x43AD25: push    eax; loadedModelRoot
0x43AD26: mov     ecx, esi; this
0x43AD28: call    QueuedDistantLOD_ApplyTransform; Verified queued distant-model transform: writes position at NiAVObject+0x54, abs(scale) at +0x60, and builds rotation from rotationAnglesXYZ using X, then Y, then Z axis matrices. NiMatrix33_Multiply is row-major left*right; composition is BaseRotation * RxTransposed(angleX) * Ry(angleY) * Rz(angleZ). The resulting 3x3 matrix is stored at NiAVObject+0x30.
0x43AD2D: mov     edi, ds:0B33A10h
0x43AD33: push    ecx
0x43AD34: mov     eax, esp
0x43AD36: mov     [eax], esi
0x43AD38: mov     [esp+10h+var_4], esp
0x43AD3C: add     esi, 8
0x43AD3F: push    esi; lpAddend
0x43AD40: call    ds:InterlockedIncrement
0x43AD46: mov     ecx, [edi+34h]
0x43AD49: call    sub_43A5F0
0x43AD4E: pop     edi
0x43AD4F: pop     esi
0x43AD50: pop     ecx
0x43AD51: retn
