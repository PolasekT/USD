//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#include "pxr/usd/usdMedia/tokens.h"

PXR_NAMESPACE_OPEN_SCOPE

UsdMediaTokensType::UsdMediaTokensType() :
    auralMode("auralMode", TfToken::Immortal),
    defaultImage("defaultImage", TfToken::Immortal),
    endTime("endTime", TfToken::Immortal),
    filePath("filePath", TfToken::Immortal),
    gain("gain", TfToken::Immortal),
    loopFromStage("loopFromStage", TfToken::Immortal),
    loopFromStart("loopFromStart", TfToken::Immortal),
    loopFromStartToEnd("loopFromStartToEnd", TfToken::Immortal),
    mediaOffset("mediaOffset", TfToken::Immortal),
    nonSpatial("nonSpatial", TfToken::Immortal),
    onceFromStart("onceFromStart", TfToken::Immortal),
    onceFromStartToEnd("onceFromStartToEnd", TfToken::Immortal),
    playbackMode("playbackMode", TfToken::Immortal),
    previews("previews", TfToken::Immortal),
    previewThumbnails("previews:thumbnails", TfToken::Immortal),
    previewThumbnailsDefault("previews:thumbnails:default", TfToken::Immortal),
    spatial("spatial", TfToken::Immortal),
    startTime("startTime", TfToken::Immortal),
    thumbnails("thumbnails", TfToken::Immortal),
    allTokens({
        auralMode,
        defaultImage,
        endTime,
        filePath,
        gain,
        loopFromStage,
        loopFromStart,
        loopFromStartToEnd,
        mediaOffset,
        nonSpatial,
        onceFromStart,
        onceFromStartToEnd,
        playbackMode,
        previews,
        previewThumbnails,
        previewThumbnailsDefault,
        spatial,
        startTime,
        thumbnails
    })
{
}

TfStaticData<UsdMediaTokensType> UsdMediaTokens;

PXR_NAMESPACE_CLOSE_SCOPE
