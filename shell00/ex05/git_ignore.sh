#!/bin/sh
git status --ignored -s | grep '!!' | awk '{ print $2 }'